@interface GameCenterUI.DynamicTypeButton : UIButton {
    void /* unknown type, empty encoding */ fontUseCaseContentSizeCategory;
    void /* unknown type, empty encoding */ fontUseCase;
    void /* unknown type, empty encoding */ titleColorFollowsTintColor;
    void /* unknown type, empty encoding */ imageAlignment;
    void /* unknown type, empty encoding */ imageWantsBaselineAlignment;
    void /* unknown type, empty encoding */ touchOutsideMargin;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
