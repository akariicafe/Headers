@class TVImageLayout, VUITextLayout;

@interface VUIUpsellOfferViewLayout : TVViewLayout

@property (readonly, nonatomic) VUITextLayout *titleTextLayout;
@property (readonly, nonatomic) VUITextLayout *descriptionTextLayout;
@property (readonly, nonatomic) TVImageLayout *imageLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (id)init;
- (void).cxx_destruct;
- (void)_configureLayout;
- (double)titleTopMarginPhone;
- (double)titleTopMarginPad;
- (double)descriptionTopMargin;

@end
