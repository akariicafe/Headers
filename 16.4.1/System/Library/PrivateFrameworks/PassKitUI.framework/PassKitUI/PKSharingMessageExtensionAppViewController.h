@class NSString, PKMessageExtensionMessageBubbleViewController, MSMessage;
@protocol PKSharingMessageExtensionPresenter;

@interface PKSharingMessageExtensionAppViewController : MSMessagesAppViewController <PKMessageExtensionMessageBubbleViewControllerDelegate, PKSharingMessageExtensionRenderer> {
    id<PKSharingMessageExtensionPresenter> _presenter;
    PKMessageExtensionMessageBubbleViewController *_messageBubbleViewController;
    MSMessage *_currentMessage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *presentationSceneIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setContentViewController:(id)a0;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 button:(id)a2 destructiveButton:(id)a3 completion:(id /* block */)a4;
- (void)_configureCurrentStateForMessage:(id)a0;
- (void)_requestResizeIfNeeded;
- (void)_validateMessageForSending:(id)a0 conversation:(id)a1 associatedText:(id)a2 completionHandler:(id /* block */)a3;
- (id)_viewControllerForPresentationStyle:(unsigned long long)a0 withConversation:(id)a1;
- (void)messageDidUpdate;
- (void)messageExtensionMessageBubbleViewControllerDidTapMessage:(id)a0;
- (void)openAppURL:(id)a0;
- (id)presenterForMessage:(id)a0;
- (void)showAlertWithTitle:(id)a0 message:(id)a1 button:(id)a2;
- (void)willBecomeActiveWithConversation:(id)a0;

@end
