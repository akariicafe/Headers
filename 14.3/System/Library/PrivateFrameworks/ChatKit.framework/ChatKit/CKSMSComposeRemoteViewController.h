@class NSString;
@protocol CKSMSComposeRemoteViewControllerDelegate;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>

@property (weak, nonatomic) id<CKSMSComposeRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerShouldSendMessageWithText:(id)a0 toRecipients:(id)a1 completion:(id /* block */)a2;
- (void)smsComposeControllerSendStartedWithText:(id)a0;
- (void)smsComposeControllerCancelled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;

@end
