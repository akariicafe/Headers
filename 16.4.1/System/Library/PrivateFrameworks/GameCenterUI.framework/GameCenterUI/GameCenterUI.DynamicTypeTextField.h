@class UIFont;

@interface GameCenterUI.DynamicTypeTextField : UITextField {
    void /* unknown type, empty encoding */ fontUseCaseContentSizeCategory;
    void /* unknown type, empty encoding */ fontUseCase;
    void /* unknown type, empty encoding */ directionalTextAlignment;
}

@property (nonatomic, readonly) BOOL jet_isTextExtraTall;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } jet_languageAwareOutsets;
@property (nonatomic, readonly) long long jet_textLength;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long textAlignment;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
