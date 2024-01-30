@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (BOOL)deviceHasSpecialTouchID;
+ (BOOL)isSpecialUiAvailable;
+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (BOOL)callerIsAllowedNonUiExtension:(id)a0;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceIsPoseidon;
+ (BOOL)deviceHasSEP;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (BOOL)deviceHasTouchID;
+ (BOOL)deviceHasSecureDoublePressHW;

- (id)init;
- (void).cxx_destruct;

@end
