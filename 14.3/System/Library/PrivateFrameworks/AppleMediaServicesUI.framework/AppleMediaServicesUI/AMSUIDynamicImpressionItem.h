@class AMSUIDynamicImpressionMetrics;

@interface AMSUIDynamicImpressionItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) AMSUIDynamicImpressionMetrics *impressionMetrics;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 impressionMetrics:(id)a1;

@end
