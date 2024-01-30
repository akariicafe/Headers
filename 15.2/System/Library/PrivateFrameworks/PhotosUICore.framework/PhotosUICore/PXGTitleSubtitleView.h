@class PXGTitleSubtitleViewConfiguration;

@interface PXGTitleSubtitleView : PXTitleSubtitleUILabel <PXGReusableView>

@property (copy, nonatomic) PXGTitleSubtitleViewConfiguration *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)becomeReusable;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
