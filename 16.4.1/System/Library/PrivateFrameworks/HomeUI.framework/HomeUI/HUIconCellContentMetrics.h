@interface HUIconCellContentMetrics : NSObject

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;

+ (id)compactMetrics;
+ (id)defaultMetrics;

@end
