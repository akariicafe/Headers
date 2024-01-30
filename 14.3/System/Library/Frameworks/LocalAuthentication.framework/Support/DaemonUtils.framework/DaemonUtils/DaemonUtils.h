@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (id)sharedInstance;
+ (id)_uuidForPid:(int)a0;
+ (BOOL)deviceHasPearl;
+ (BOOL)_isSiriExtensionOf:(id)a0 runningWithAuditToken:(struct { unsigned int x0[8]; })a1;
+ (id)_callerUUID;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (BOOL)callerIsAllowedNonUiExtension:(id)a0;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (BOOL)deviceSupports3D;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (BOOL)deviceHasSEP;
+ (id)_pluginDisplayNameForUUID:(id)a0 bundleId:(id *)a1;
+ (id)_pluginDisplayNameForPID:(int)a0 bundleId:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
