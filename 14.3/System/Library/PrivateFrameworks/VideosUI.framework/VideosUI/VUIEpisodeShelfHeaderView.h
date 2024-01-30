@class VUISeasonPickerButton, IKViewElement;

@interface VUIEpisodeShelfHeaderView : UICollectionReusableView

@property (retain, nonatomic) IKViewElement *viewElement;
@property (readonly, nonatomic) VUISeasonPickerButton *button;

+ (id)configureWithElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setButton:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (void)switchToIndex:(unsigned long long)a0;

@end
