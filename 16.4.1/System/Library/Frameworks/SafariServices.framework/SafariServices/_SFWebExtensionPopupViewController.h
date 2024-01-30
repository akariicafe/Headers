@class NSString, NSTimer, WKWebView, SFWebExtension, UIViewController;
@protocol _SFPopoverSourceInfo, WBSWebExtensionWindow;

@interface _SFWebExtensionPopupViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    UIViewController *_parentViewController;
    id<_SFPopoverSourceInfo> _popoverSourceInfo;
    _SFWebExtensionPopupViewController *_referenceToSelf;
    NSTimer *_contentSizeTimeoutTimer;
    NSTimer *_contentSizeStabilizedTimer;
    struct CGSize { double width; double height; } _previousContentSize;
    SFWebExtension *_webExtension;
    BOOL _hasDisconnectedFromWebExtension;
    BOOL _presentedAsSheet;
}

@property (readonly, nonatomic) WKWebView *popupWebView;
@property (readonly, weak, nonatomic) id<WBSWebExtensionWindow> window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_presentationController:(id)a0 prepareAdaptivePresentationController:(id)a1;
- (void)_contentSizeDidStabilize;
- (void)_dismissPopup;
- (void)_displayPopup;
- (void)_showExtensionPopupIfNeededAndUpdateContentSize;
- (void)_updateDetentForSheetPresentationController:(id)a0;
- (void)_updatePopoverContentSizeIfNecessary;
- (void)_viewControllerDismissalTransitionDidEnd:(id)a0;
- (void)disconnectFromWebExtension;
- (id)initWithPopupURL:(id)a0 webExtension:(id)a1 window:(id)a2 parentViewController:(id)a3 popoverSourceInfo:(id)a4;

@end
