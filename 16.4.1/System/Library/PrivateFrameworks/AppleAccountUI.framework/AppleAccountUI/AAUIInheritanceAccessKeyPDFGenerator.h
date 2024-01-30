@class NSString, AAInheritanceContactController;

@interface AAUIInheritanceAccessKeyPDFGenerator : NSObject {
    NSString *_ownerDisplayName;
    NSString *_ownerFirstName;
    NSString *_ownerEmailAddress;
    NSString *_contactDisplayName;
    AAInheritanceContactController *_contactController;
}

- (void).cxx_destruct;
- (id)_attributedStringWithField:(id)a0 value:(id)a1;
- (id)_pdfMetaData;
- (void)_renderAccessKeyWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yPosition:(double)a1;
- (double)_renderAccountDetailsWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yPosition:(double)a1;
- (void)_renderFooterWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yPosition:(double)a1;
- (void)_renderLogoImageWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_renderMessageWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yPosition:(double)a1;
- (double)_renderQRCodeImageWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yPosition:(double)a1;
- (double)_renderRectBoxWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yPosition:(double)a1 drawContext:(struct CGContext { } *)a2;
- (double)_renderTitleWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createPDFDocumentData;
- (id)initWithAppleAccount:(id)a0 localContactInfo:(id)a1;

@end
