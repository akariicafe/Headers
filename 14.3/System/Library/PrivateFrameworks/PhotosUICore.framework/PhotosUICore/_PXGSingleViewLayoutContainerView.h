@class UIView;
@protocol NSCopying;

@interface _PXGSingleViewLayoutContainerView : UIView <PXGReusableView>

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)becomeReusable;

@end
