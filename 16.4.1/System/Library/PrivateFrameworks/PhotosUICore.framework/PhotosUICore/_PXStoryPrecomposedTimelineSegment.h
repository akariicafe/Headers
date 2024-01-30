@protocol PXStoryClipComposition;

@interface _PXStoryPrecomposedTimelineSegment : NSObject

@property (retain, nonatomic) id<PXStoryClipComposition> clipComposition;
@property (nonatomic) char transitionKind;

- (void).cxx_destruct;
- (id)initWithClipComposition:(id)a0 transitionKind:(char)a1;

@end
