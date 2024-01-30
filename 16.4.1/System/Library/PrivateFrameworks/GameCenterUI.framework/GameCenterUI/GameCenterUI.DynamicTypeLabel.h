@class UIFont, NSAttributedString;

@interface GameCenterUI.DynamicTypeLabel : UILabel {
    void /* unknown type, empty encoding */ fontUseCaseContentSizeCategory;
    void /* unknown type, empty encoding */ systemDesign;
    void /* unknown type, empty encoding */ fontUseCase;
    void /* unknown type, empty encoding */ wantsFastBaselineMeasurement;
    void /* unknown type, empty encoding */ directionalTextAlignment;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) NSAttributedString *attributedText;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
