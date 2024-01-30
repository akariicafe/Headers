@class NSString, UIViewController;
@protocol CKBrowserViewControllerProtocol;

@interface CKAppContainerNavigationController : UINavigationController <UISheetPresentationControllerDelegate, CKBrowserViewControllerSendDelegate>

@property (retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *browserVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void).cxx_destruct;
- (void)_sheetPresentationController:(id)a0 didChangeIndexOfCurrentDetent:(long long)a1;
- (void)transitionBrowserToMediumDetent;
- (void)closeButtonPressed:(id)a0;
- (void)commitPayload:(id)a0;
- (void)commitSticker:(id)a0;
- (void)commitSticker:(id)a0 withDragTarget:(id)a1;
- (void)dismissAndReloadInputViews:(BOOL)a0;
- (void)dismissToKeyboard:(BOOL)a0;
- (id)dragControllerTranscriptDelegate;
- (id)initWithRemoteViewController:(id)a0;
- (void)openURL:(id)a0 applicationIdentifier:(id)a1 pluginID:(id)a2 completionHandler:(id /* block */)a3;
- (void)openURL:(id)a0 pluginID:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentAlertWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 completion:(id /* block */)a3;
- (void)requestPresentationStyleExpanded:(BOOL)a0;
- (void)setLocalUserIsTyping:(BOOL)a0;
- (void)startEditingPayload:(id)a0;
- (void)startEditingPayload:(id)a0 dismiss:(BOOL)a1;
- (void)transitionBrowserToLargeDetent;

@end
