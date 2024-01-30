@class NSString, AAAccountNotificationFollowUpController, NSObject;
@protocol OS_dispatch_queue;

@interface AAAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_didChangeBackgroundQueue;
    NSObject<OS_dispatch_queue> *_fmBackgroundQueue;
    NSObject<OS_dispatch_queue> *_daemonBackgroundQueue;
    AAAccountNotificationFollowUpController *_followUpController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_availableAccountTypesForBeneficiaryAccounts;
- (BOOL)_warmupShouldHaveCompletedForAccount:(id)a0;
- (BOOL)_updateOrRemoveBenefactorAccount:(id)a0 inStore:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_handleFindMyChangesForAccount:(id)a0;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_endWarmupForAccount:(id)a0 inStore:(id)a1;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
