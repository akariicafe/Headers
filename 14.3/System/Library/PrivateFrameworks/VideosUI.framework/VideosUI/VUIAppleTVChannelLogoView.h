@class VUILabel, _TVImageView, VUIAppleTVChannelLogoLayout;

@interface VUIAppleTVChannelLogoView : UIView

@property (retain, nonatomic) VUIAppleTVChannelLogoLayout *layout;
@property (retain, nonatomic) _TVImageView *appleTVImageView;
@property (retain, nonatomic) VUILabel *channelsLabel;
@property (retain, nonatomic) _TVImageView *channelLogoView;

+ (id)logoViewWithChannelImageElement:(id)a0 layout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
