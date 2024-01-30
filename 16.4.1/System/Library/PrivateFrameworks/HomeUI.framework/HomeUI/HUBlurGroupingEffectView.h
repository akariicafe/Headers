@interface HUBlurGroupingEffectView : UIView <HUBackgroundEffectViewGrouping> {
    void /* unknown type, empty encoding */ visualEffectViews;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)backgroundEffectAddCaptureDependent:(id)a0 forBackgroundEffectIdentifier:(id)a1;
- (void)backgroundEffectRemoveCaptureDependent:(id)a0 forBackgroundEffectIdentifier:(id)a1;

@end
