@interface PXStoryPrecomposedTimelineProducer : NSObject <PXStoryTimelineProducer> {
    struct { struct CGSize { double width; double height; } viewportSize; double dividerWidth; double singleAssetAspectRatio; } _clipCompositionContext;
    struct { struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } s; struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } t; } _noKenBurnsEffectParameters[3];
}

@property (nonatomic) unsigned long long timelineKind;

- (id)_segmentsForTimelineKind:(unsigned long long)a0 spec:(id)a1;
- (id)createTimelineWithConfiguration:(id)a0;
- (id)initWithTimelineKind:(unsigned long long)a0;
- (id)requestTimelineWithConfiguration:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;

@end
