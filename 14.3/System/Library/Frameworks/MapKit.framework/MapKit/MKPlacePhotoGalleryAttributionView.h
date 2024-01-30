@class NSArray, UIVisualEffectView, UIImageView, UILabel;

@interface MKPlacePhotoGalleryAttributionView : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIImageView *attributionLogoImageView;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *primaryLabelOnlyConstraints;

- (id)init;
- (void).cxx_destruct;
- (void)updateFonts;
- (void)updateStyle:(long long)a0;
- (void)setupSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (long long)blurEffectWithStyle:(long long)a0;
- (void)setDescription:(id)a0 license:(id)a1 author:(id)a2;
- (void)setAttributionLogoImage:(id)a0;

@end
