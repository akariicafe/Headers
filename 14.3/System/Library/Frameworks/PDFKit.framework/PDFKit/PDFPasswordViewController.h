@class PDFView, UIView;

@interface PDFPasswordViewController : UIViewController <UIDocumentPasswordViewDelegate> {
    UIView *_passwordView;
    PDFView *_pdfView;
}

- (void)_commonInit;
- (void).cxx_destruct;
- (void)loadView;
- (void)userDidEnterPassword:(id)a0 forPasswordView:(id)a1;
- (void)setPDFView:(id)a0;

@end
