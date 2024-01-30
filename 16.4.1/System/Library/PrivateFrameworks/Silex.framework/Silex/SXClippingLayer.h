@class CALayer;

@interface SXClippingLayer : SXLayer

@property (retain, nonatomic) CALayer *contentLayer;
@property (nonatomic) unsigned long long clippingMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;

- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)layoutForContentsRect;
- (void)layoutForMasking;

@end
