@class NSString;
@protocol CKSMSComposeRemoteViewControllerDelegate;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>

@property (weak, nonatomic) id<CKSMSComposeRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)dealloc;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerShouldSendMessageWithText:(id)a0 toRecipients:(id)a1 completion:(id /* block */)a2;
- (void)smsComposeControllerSendStartedWithText:(id)a0;
- (void)smsComposeControllerCancelled;

@end
