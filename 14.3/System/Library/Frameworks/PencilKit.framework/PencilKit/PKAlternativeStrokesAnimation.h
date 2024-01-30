@class PKShape, NSArray;

@interface PKAlternativeStrokesAnimation : NSObject

@property (readonly, nonatomic) PKShape *shape;
@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double crossFadeStartTime;
@property (readonly, nonatomic) double fadeDuration;
@property (readonly, nonatomic) double originalStrokeDimmingFactor;
@property (readonly, nonatomic) BOOL accepted;
@property (nonatomic) BOOL forceDone;

- (void).cxx_destruct;
- (double)alphaAtTime:(double)a0;
- (double)originalStrokeAlphaAtTime:(double)a0;
- (void)startCrossFade:(double)a0 accepted:(BOOL)a1;
- (BOOL)isDoneAtTime:(double)a0;
- (id)initWithStrokes:(id)a0 shape:(id)a1 startTime:(double)a2 fadeDuration:(double)a3;

@end
