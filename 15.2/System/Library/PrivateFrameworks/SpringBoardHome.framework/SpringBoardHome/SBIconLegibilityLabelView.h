@class SBIconView, SBIconLabelImageParameters, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView <SBIconLabelView>

@property (retain, nonatomic) SBIconLabelImageParameters *imageParameters;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateIconLabelWithSettings:(id)a0 imageParameters:(id)a1;

@end
