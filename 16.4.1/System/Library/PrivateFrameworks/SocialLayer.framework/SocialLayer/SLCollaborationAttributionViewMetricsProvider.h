@interface SLCollaborationAttributionViewMetricsProvider : NSObject {
    void /* unknown type, empty encoding */ metrics;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } drawingSize;
@property (nonatomic, readonly) double avatarDiameter;
@property (nonatomic, readonly) double avatarLabelSpace;
@property (nonatomic, readonly) double titleSubtitleSpace;

- (const struct __CTLine { } *)singleLineSubtitleForString:(id)a0;
- (const struct __CTLine { } *)singleLineTitleForString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSlotStyle:(id)a0 tag:(id)a1;
- (id)initWithVariant:(long long)a0 slotStyle:(id)a1 maxWidth:(double)a2;

@end
