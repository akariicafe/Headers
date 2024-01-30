@class NSString, NSMutableSet, UIView, ACMAppleConnectImplComponents, NSError;

@interface ACMAppleConnectImpl : NSObject <ACMAppleConnectImpl, ACMUIControllerDelegate> {
    NSError *_memoryError;
    NSMutableSet *_handlers;
}

@property long long logLevel;
@property (readonly, retain) NSMutableSet *handlers;
@property (readonly) ACMAppleConnectImplComponents *components;
@property (readonly) unsigned long long signInDialogContentStyle;
@property (readonly) UIView *managerApprovalDialogSummaryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelRequests;
- (id)init;
- (void)dealloc;
- (void)authenticate:(id)a0;
- (void)scheduleHandler:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)unscheduleHandler:(id)a0;
- (void)logoutUser:(id)a0 inRealm:(id)a1;
- (void)updateLogLevel;
- (void)authenticateRunningOnMainThreadWithRequest:(id)a0;
- (void)unscheduleAllHandlers;
- (void)changeGestureRunningOnMainThreadWithRequest:(id)a0;
- (void)changePasswordRunningOnMainThreadWithRequest:(id)a0;
- (void)uiControllerOnLogOut:(id)a0;
- (unsigned long long)uiControllerSignInDialogContentStyle:(id)a0;
- (id)uiControllerManagerApprovalDialogSummaryView:(id)a0;
- (id)memoryError;
- (void)changeUserPasswordWithRequest:(id)a0 isGesture:(BOOL)a1;
- (BOOL)shouldReleaseOnMemoryWarning;
- (void)verifyServiceTicket:(id)a0;

@end
