@class NSString, GKEventEmitter;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;

+ (id)currentDevice;

- (void)removeLockStatusObserver:(id)a0;
- (id)userAgent;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (void)stopObservingKeyBagStatus;
- (void)beginObservingKeyBagStatusWithCallback:(void /* function */ *)a0;
- (void).cxx_destruct;
- (BOOL)isFocusDevice;
- (BOOL)isDevelopmentDevice;
- (id)init;
- (id)buildVersionHeader;
- (id)storeUserAgent;
- (void)addLockStatusObserver:(id)a0;
- (void)dealloc;
- (id)_platformUDID;
- (BOOL)isProductType:(unsigned int)a0;
- (void)_initPlatform;
- (id)platformBuildVersion;
- (id)protocolVersionHeader;
- (id)processNameHeader;

@end
