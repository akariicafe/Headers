@class STManagementState, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface STManagementStateObserver : NSObject

@property (readonly, copy) NSNumber *dsid;
@property (retain) STManagementState *managementState;
@property long long contactManagementState;
@property (retain) STManagementStateObserver *me;
@property (readonly) NSObject<OS_dispatch_queue> *screenTimeSettingsChangeQueue;
@property (readonly) int screenTimeSettingsChangeNotifyToken;

+ (void)createObserverWithDSID:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_screenTimeSettingsDidChange;
- (id)_initWithDSID:(id)a0;

@end
