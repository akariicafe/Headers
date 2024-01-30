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

- (id)userAgent;
- (BOOL)isDevelopmentDevice;
- (void)removeLockStatusObserver:(id)a0;
- (id)init;
- (BOOL)isProductType:(unsigned int)a0;
- (id)protocolVersionHeader;
- (void)stopObservingKeyBagStatus;
- (void)dealloc;
- (BOOL)isFocusDevice;
- (id)platformBuildVersion;
- (id)storeUserAgent;
- (void)addLockStatusObserver:(id)a0;
- (id)_platformUDID;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (id)buildVersionHeader;
- (id)processNameHeader;
- (void)beginObservingKeyBagStatusWithCallback:(void /* function */ *)a0;
- (void)_initPlatform;

@end
