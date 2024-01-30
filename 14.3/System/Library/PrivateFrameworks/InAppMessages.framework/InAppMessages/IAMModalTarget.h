@class IAMMessageCoordinator, NSString, NSDictionary, IAMWebMessagePresentationCoordinator, IAMPresentingModalMessageContext;

@interface IAMModalTarget : NSObject <IAMWebMessagePresentationCoordinatorDelegate, IAMMessageGroupInternalDelegate, IAMMessageTarget> {
    IAMMessageCoordinator *_messageCoordinator;
    IAMWebMessagePresentationCoordinator *_webMessagePresentationCoordinator;
}

@property (retain, nonatomic) IAMPresentingModalMessageContext *presentingMessageContext;
@property (readonly, nonatomic) NSString *targetIdentifier;
@property (copy, nonatomic) NSDictionary *messageGroupsByGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration;

+ (void)initialize;
+ (BOOL)isAnyModalTargetPresentingMessage;

- (void)messageGroup:(id)a0 didReportModalMessageWasPresentedWithIdentifier:(id)a1;
- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 forTarget:(id)a2;
- (void)messageGroup:(id)a0 didReportModalMessageWasDismissedWithIdentifier:(id)a1;
- (void)_reportMessageDidDisappearWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)webMessagePresentationCoordinatorWebMessageDidRequestAction:(id)a0 actionConfiguration:(id)a1;
- (void)dealloc;
- (void)_reportMessageDidAppearWithIdentifier:(id)a0;
- (id)viewControllerForModalPresentationUsingCoordinator:(id)a0;
- (void)messageGroup:(id)a0 didReportModalMessageWithIdentifier:(id)a1 actionWasPerformedWithIdentifier:(id)a2;
- (id)_applicationViewControllerForModalPresentation;
- (void)webMessagePresentationCoordinatorWebMessageDidReportEvent:(id)a0 event:(id)a1;
- (void)_handlePresentation:(id)a0;
- (void)_presentWebModalMessageEntry:(id)a0;
- (void)presentationControllerDismissalTransitionDidEnd:(id)a0;
- (void)messageGroup:(id)a0 didReportModalMessagePresentationFailedWithIdentifier:(id)a1;
- (void)messageCoordinator:(id)a0 didUpdatePriorityMessage:(id)a1 fromMessageEntry:(id)a2 forTarget:(id)a3;
- (void)webMessagePresentationCoordinatorWebMessageDidFinishPresentation:(id)a0;
- (void)_handlePresentingMessageContextDidExpireBeforePresentation;
- (void)webMessagePresentationCoordinatorWebMessageDidLoad:(id)a0;
- (void)_presentMessage:(id)a0 messageEntry:(id)a1 fromViewController:(id)a2;
- (void)webMessagePresentationCoordinatorWebMessageDidFail:(id)a0;
- (id)initWithMessageCoordinator:(id)a0 targetIdentifier:(id)a1;

@end
