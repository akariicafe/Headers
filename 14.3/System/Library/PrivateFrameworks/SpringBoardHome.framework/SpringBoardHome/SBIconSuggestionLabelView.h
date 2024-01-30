@class SBIconView, UIImage, SBIconLabelImageParameters;

@interface SBIconSuggestionLabelView : UIImageView <SBIconLabelView>

@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) SBIconLabelImageParameters *imageParameters;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateIconLabelWithSettings:(id)a0 imageParameters:(id)a1;

@end
