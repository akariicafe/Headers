@class VUIProductInfoAiringLayout, VUILabel, _TVImageView;

@interface VUIProductInfoAiringView : UIView

@property (retain, nonatomic) VUIProductInfoAiringLayout *layout;
@property (retain, nonatomic) VUILabel *infoLabel;
@property (retain, nonatomic) _TVImageView *logo;

+ (id)configureViewWithElement:(id)a0 existingView:(id)a1;
+ (id)airingTextWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)_tintColorForDataSource:(id)a0 interfaceStyle:(long long)a1;
+ (id)airingLogoWithImageDictionary:(id)a0 layout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
