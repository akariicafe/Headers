@interface MFSendLaterHeaderCollectionViewHelper : NSObject

@property (nonatomic) double width;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) double viewScale;
@property (nonatomic) double sendLaterLabelWidth;
@property (nonatomic) double longestDateWidth;
@property (nonatomic) double longestTimeWidth;
@property (readonly, nonatomic) BOOL willContentTruncate;

- (id)initWithWidth:(double)a0 layoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 viewScale:(double)a2;
- (void)precalculateWidthsWithDescription:(id)a0;
- (BOOL)updateLayoutMarginsIfNeeded:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)updateWidthIfNeeded:(double)a0;

@end
