@class SUOverlayBackgroundViewController, SUPreviewOverlayViewController, NSString, UITabBarController, SUClientInterface;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate> {
    SUPreviewOverlayViewController *_previewOverlayViewController;
}

@property (readonly, nonatomic) SUClientInterface *clientInterface;
@property (retain, nonatomic) UITabBarController *rootViewController;
@property (readonly, nonatomic) SUOverlayBackgroundViewController *overlayBackgroundViewController;
@property (readonly, nonatomic) SUPreviewOverlayViewController *previewOverlayViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (void)dealloc;
- (void)_showPreviewOverlayAnimated:(BOOL)a0;
- (id)initWithClientInterface:(id)a0;
- (BOOL)presentOverlayBackgroundViewController:(id)a0;
- (void)scriptOverlayBackgroundDidDismiss:(id)a0;
- (void)dismissOverlayBackgroundViewController;
- (id)_previewOverlayViewController;
- (void)composeEmailWithSubject:(id)a0 body:(id)a1;
- (BOOL)enterAccountFlowWithViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)composeReviewWithViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)performActionForDialog:(id)a0 button:(id)a1;
- (void)_removePreviewOverlayViewController;
- (void)hidePreviewOverlayAnimated:(BOOL)a0;
- (void)showPreviewOverlayAnimated:(BOOL)a0;

@end
