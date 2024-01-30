@class NSObject;
@protocol OS_dispatch_queue;

@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly, nonatomic) BOOL isCurrentUserAdmin;
@property double refreshPeriod;

+ (id)sharedCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)_statusIsFresh:(id)a0;
- (id)_adminStatusForAccountID:(id)a0;
- (void)_setAdminStatus:(id)a0 forAccountID:(id)a1;
- (void)getAdminStatusAndWaitWithOptions:(id)a0 resultBlock:(id /* block */)a1;
- (void)getAdminStatusWithOptions:(id)a0 resultBlock:(id /* block */)a1;

@end
