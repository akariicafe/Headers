@class NSArray;

@interface PXStoryTransitionProducer : NSObject

@property (retain, nonatomic) NSArray *fallbackTransitionReasons;

+ (BOOL)isSupportedTransitionWithKind:(char)a0 betweenSegmentWithClipComposition:(struct { long long x0; BOOL x1; long long x2; double x3; long long x4; })a1 andSegmentWithClipComposition:(struct { long long x0; BOOL x1; long long x2; double x3; long long x4; })a2;
+ (BOOL)isSupportedTransitionWithKind:(char)a0 fromSegmentIdentifier:(long long)a1 toSegmentIdentifier:(long long)a2 inTimeline:(id)a3;
+ (id)supportedTransitionKinds;

- (void).cxx_destruct;
- (id)_panTransitionsForOrderOutSegment:(id)a0 orderInSegment:(id)a1 viewportSize:(struct CGSize { double x0; double x1; })a2 transitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a3;
- (void)_recordFallbackToCutTransitionBetweenSegmentWithIdentifier:(long long)a0 andSegmentWithIdentifier:(long long)a1 reason:(id)a2;
- (id)_wipeTransitionsForOrderOutSegment:(id)a0 orderInSegment:(id)a1 viewportSize:(struct CGSize { double x0; double x1; })a2 dividerWidth:(double)a3 transitionInfo:(struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; })a4;
- (id)transitionsWithConfiguration:(id)a0;

@end
