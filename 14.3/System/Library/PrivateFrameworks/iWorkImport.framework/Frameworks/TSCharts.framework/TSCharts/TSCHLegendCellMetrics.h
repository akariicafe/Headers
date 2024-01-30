@class TSWPParagraphStyle;

@interface TSCHLegendCellMetrics : NSObject

@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle;
@property (readonly, nonatomic) struct __CTFont { } *font;
@property (readonly, nonatomic) float badgeSize;
@property (readonly, nonatomic) float symbolGap;
@property (readonly, nonatomic) float titleHeight;
@property (readonly, nonatomic) float lineGap;
@property (readonly, nonatomic) float baseline;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParagraphStyle:(id)a0;

@end
