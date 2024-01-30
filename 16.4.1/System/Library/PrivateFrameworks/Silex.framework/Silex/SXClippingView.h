@class SXClippingLayer, UIView;

@interface SXClippingView : UIView

@property (readonly, nonatomic) SXClippingLayer *layer;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) unsigned long long clippingMode;

+ (Class)layerClass;

- (id)initWithContentView:(id)a0;
- (void).cxx_destruct;

@end
