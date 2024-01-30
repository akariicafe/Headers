@class NSArray, VUILabel, UIView, VUIProductMetadataLayout;

@interface VUIProductSectionView : UIView

@property (retain, nonatomic) UIView *defaultFocusView;
@property (retain, nonatomic) VUILabel *prototypeInfoHeaderLabel;
@property (retain, nonatomic) VUIProductMetadataLayout *layout;
@property (retain, nonatomic) VUILabel *headerView;
@property (retain, nonatomic) NSArray *infoViews;
@property (retain, nonatomic) UIView *footerView;

+ (id)headerViewWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)footerLabelWithString:(id)a0 layout:(id)a1 existingView:(id)a2;
+ (id)footerDescriptionWithString:(id)a0 layout:(id)a1 maxLine:(unsigned long long)a2 existingView:(id)a3;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
