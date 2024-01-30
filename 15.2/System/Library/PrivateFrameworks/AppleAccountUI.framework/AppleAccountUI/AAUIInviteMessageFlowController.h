@class UINavigationController, NSString, AAUIMessagesInviteConfigurationController, AAUISpinnerManager, AAMessagesInviteContext;
@protocol AAUIOBWelcomeControllerViewModelProtocol, AAUIInviteMessageFlowControllerDelegate;

@interface AAUIInviteMessageFlowController : NSObject <AAUIInviteControllerDelegate> {
    unsigned long long _flow;
    AAMessagesInviteContext *_context;
    NSString *_recipientHandle;
    id<AAUIOBWelcomeControllerViewModelProtocol> _defaultMessageViewModel;
    id<AAUIOBWelcomeControllerViewModelProtocol> _messageSentViewModel;
    AAUIMessagesInviteConfigurationController *_messageComposer;
    AAUISpinnerManager *_spinnerManager;
}

@property (retain, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) id<AAUIInviteMessageFlowControllerDelegate> delegate;
@property (nonatomic) BOOL hideCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 flow:(unsigned long long)a1 navigationController:(id)a2 defaultMessageViewModel:(id)a3 messageSentViewModel:(id)a4;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)_bubbleImageForFlow:(unsigned long long)a0;
- (void)inviteController:(id)a0 didFinishWithStatus:(unsigned long long)a1 recipients:(id)a2 userInfo:(id)a3 error:(id)a4;
- (void)_showDefaultMessageView;
- (void)_sendDefaultMessage;
- (void)_showMessagesComposeController;
- (void)_cancelMessageInvitationFlow;
- (void)_finishMessageInvitationFlow;
- (void)_messageSentSecondaryActionTapped;
- (void)_showInvitationSent;
- (void)_invitationWasSent;

@end
