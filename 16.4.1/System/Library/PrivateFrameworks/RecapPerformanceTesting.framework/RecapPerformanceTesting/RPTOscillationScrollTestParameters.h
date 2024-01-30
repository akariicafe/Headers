@class NSString, RPTCoordinateSpaceConverter, CAMediaTimingFunction;

@interface RPTOscillationScrollTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>

@property (nonatomic) unsigned long long iterations;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (retain, nonatomic) CAMediaTimingFunction *curveFunction;
@property (nonatomic) BOOL shouldFlick;
@property (nonatomic) double useDefaultDurationForFlick;
@property (nonatomic) BOOL preventDismissalGestures;
@property (nonatomic) BOOL finishWithHalfIteration;
@property (nonatomic) double amplitudeVariationPerIteration;
@property (nonatomic) double initialAmplitude;
@property (nonatomic) long long initialDirection;
@property (nonatomic) double iterationDuration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })_incrementPoint:(struct CGPoint { double x0; double x1; })a0 final:(BOOL)a1;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 useFlicks:(BOOL)a3 preventDismissalGestures:(BOOL)a4 initialAmplitude:(double)a5 amplitudeVariationPerIteration:(double)a6 initialDirection:(long long)a7 iterationDuration:(double)a8 finishWithHalfIteration:(BOOL)a9 completionHandler:(id /* block */)a10;
- (struct CGPoint { double x0; double x1; })finalFingerPosition;
- (struct CGPoint { double x0; double x1; })initialFingerPosition;
- (id /* block */)composerBlock;
- (void)prepareWithComposer:(id)a0;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 useFlicks:(BOOL)a3 preventDismissalGestures:(BOOL)a4 initialAmplitude:(double)a5 amplitudeVariationPerIteration:(double)a6 initialDirection:(long long)a7 iterationDuration:(double)a8 finishWithHalfIteration:(BOOL)a9;
- (void).cxx_destruct;
- (void)scrollWithComposer:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;

@end
