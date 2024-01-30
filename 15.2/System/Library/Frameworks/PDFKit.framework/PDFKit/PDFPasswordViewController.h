@class UIDocumentPasswordView, NSObject;
@protocol PDFPasswordViewControllerDelegate;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {
    NSObject<PDFPasswordViewControllerDelegate> *_delegate;
    UIDocumentPasswordView *_uiDocPasswordView;
}

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (void).cxx_destruct;
- (void)clearPasswordField;
- (void)presentInvalidPasswordAlertWithParentViewController:(id)a0;
- (void)focusOnPasswordField;

@end
