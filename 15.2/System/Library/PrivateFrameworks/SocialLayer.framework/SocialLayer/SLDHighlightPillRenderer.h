@class UISSlotStyle, NSArray, SLDHighlightPillSlotTag, SLHighlightPillMetrics;

@interface SLDHighlightPillRenderer : NSObject

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDHighlightPillSlotTag *slotTag;
@property (retain, nonatomic) SLHighlightPillMetrics *metricsProvider;
@property (nonatomic) struct __CTFont { } *font;
@property (retain, nonatomic) NSArray *contactImages;
@property (nonatomic, getter=isRTL) BOOL RTL;

- (void)renderInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(id)a0 tag:(id)a1;
- (void)_renderAvatarsInContext:(struct CGContext { } *)a0;

@end
