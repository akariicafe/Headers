@class TSUColor;

@interface TSTTableBadge : NSObject

@property (nonatomic) int badgeType;
@property (retain, nonatomic) TSUColor *color;
@property (nonatomic) double viewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)badgeWithType:(int)a0 color:(id)a1 viewScale:(double)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)p_drawCellCommentBadgeInContext:(struct CGContext { } *)a0;
- (void)p_drawCellErrorIndicatorInContext:(struct CGContext { } *)a0;
- (void)p_drawCellWarningBadgeInContext:(struct CGContext { } *)a0;

@end
