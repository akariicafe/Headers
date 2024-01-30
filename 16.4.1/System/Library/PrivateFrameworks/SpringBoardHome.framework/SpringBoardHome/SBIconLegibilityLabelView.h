@class SBIconView, SBIconLabelImageParameters, UIImage;

@interface SBIconLegibilityLabelView : SBUILegibilityView <SBIconLabelView>

@property (retain, nonatomic) SBIconLabelImageParameters *imageParameters;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;

- (id)initWithSettings:(id)a0 legibilityEngine:(id)a1;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateIconLabelWithSettings:(id)a0 imageParameters:(id)a1;

@end
