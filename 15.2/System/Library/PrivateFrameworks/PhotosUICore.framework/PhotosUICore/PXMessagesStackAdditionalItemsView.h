@class PXMessagesStackAdditionalItemsViewUserData, UIVisualEffectView, UILabel;

@interface PXMessagesStackAdditionalItemsView : UIView <PXGReusableView> {
    UIVisualEffectView *_visualEffectView;
    UILabel *_label;
}

@property (copy, nonatomic) PXMessagesStackAdditionalItemsViewUserData *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)layoutSubviews;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_localizedTitleForAdditionalItemsCount:(struct { unsigned long long x0; long long x1; })a0;

@end
