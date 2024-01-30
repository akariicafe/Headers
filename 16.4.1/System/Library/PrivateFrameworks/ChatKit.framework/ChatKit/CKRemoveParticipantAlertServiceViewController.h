@interface CKRemoveParticipantAlertServiceViewController : UIViewController <CKRemoveParticipantAlertServiceViewControllerProtocol>

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewDidLoad;
- (void)_dismissAndCleanup;
- (void)promptToRemoveParticipant:(id)a0 fromHighlight:(id)a1 usingPreferredStyle:(long long)a2;

@end
