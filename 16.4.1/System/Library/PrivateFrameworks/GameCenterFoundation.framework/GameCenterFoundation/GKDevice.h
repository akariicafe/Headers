@class NSString, GKEventEmitter;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;

+ (id)currentDevice;
+ (id)storeUserAgentWithDeviceType:(id)a0 osVersion:(id)a1;

- (id)userAgent;
- (id)protocolVersionHeader;
- (BOOL)isProductType:(unsigned int)a0;
- (void)_initPlatform;
- (void)removeLockStatusObserver:(id)a0;
- (void)addLockStatusObserver:(id)a0;
- (id)buildVersionHeader;
- (BOOL)isDevelopmentDevice;
- (void)beginObservingKeyBagStatusWithCallback:(void /* function */ *)a0;
- (id)_platformUDID;
- (id)storeUserAgent;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (void)dealloc;
- (void)stopObservingKeyBagStatus;
- (BOOL)isFocusDevice;
- (id)init;
- (id)platformBuildVersion;
- (id)processNameHeader;
- (void).cxx_destruct;

@end
