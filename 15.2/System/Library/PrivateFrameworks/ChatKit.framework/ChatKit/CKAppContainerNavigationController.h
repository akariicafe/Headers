@class NSString, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@interface CKAppContainerNavigationController : UINavigationController <_UISheetPresentationControllerDelegate, CKBrowserViewControllerSendDelegate>

@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *browserVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startEditingPayload:(id)a0;
- (void)_sheetPresentationController:(id)a0 didChangeIndexOfCurrentDetent:(long long)a1;
- (id)dragControllerTranscriptDelegate;
- (void)commitPayload:(id)a0;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1;
- (void)openURL:(id)a0 pluginID:(id)a1 completionHandler:(id /* block */)a2;
- (void)commitSticker:(id)a0;
- (void)openURL:(id)a0 applicationIdentifier:(id)a1 pluginID:(id)a2 completionHandler:(id /* block */)a3;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)dismissToKeyboard:(BOOL)a0;
- (void)commitSticker:(id)a0 withDragTarget:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)closeButtonPressed:(id)a0;
- (void)setLocalUserIsTyping:(BOOL)a0;
- (void)transitionBrowserToMediumDetent;
- (void)transitionBrowserToLargeDetent;
- (id)initWithRemoteViewController:(id)a0;
- (void)dismissAndReloadInputViews:(BOOL)a0;
- (void)requestPresentationStyleExpanded:(BOOL)a0;

@end
