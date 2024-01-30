@class NSString, UIView;

@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    double _height;
}

@property (retain, nonatomic) UIView *backgroundImageView;
@property (retain, nonatomic) UIView *infoListView;
@property (retain, nonatomic) UIView *stackView;
@property (retain, nonatomic) UIView *heroImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productBannerViewWithElement:(id)a0 existingView:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (id)impressionableElementsContainedInDocument:(id)a0;

@end
