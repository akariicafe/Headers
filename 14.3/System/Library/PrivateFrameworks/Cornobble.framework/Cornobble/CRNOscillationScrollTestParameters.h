@class NSString, RCPSyntheticEventStream;

@interface CRNOscillationScrollTestParameters : NSObject <CRNBlockBasedScrollTestParameters, CRNScrollTestParameters>

@property (readonly, nonatomic) long long realInitialDirection;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) BOOL shouldFlick;
@property (nonatomic) BOOL preventDismissalGestures;
@property (nonatomic) BOOL finishWithHalfIteration;
@property (nonatomic) double amplitudeVariationPerIteration;
@property (nonatomic) double initialAmplitude;
@property (nonatomic) long long initialDirection;
@property (nonatomic) double iterationDuration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (copy, nonatomic) NSString *testName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })finalFingerPosition;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 useFlicks:(BOOL)a3 preventDismissalGestures:(BOOL)a4 initialAmplitude:(double)a5 amplitudeVariationPerIteration:(double)a6 initialDirection:(long long)a7 iterationDuration:(double)a8 finishWithHalfIteration:(BOOL)a9 completionHandler:(id /* block */)a10;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })initialFingerPosition;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 useFlicks:(BOOL)a3 preventDismissalGestures:(BOOL)a4 initialAmplitude:(double)a5 amplitudeVariationPerIteration:(double)a6 initialDirection:(long long)a7 iterationDuration:(double)a8 finishWithHalfIteration:(BOOL)a9;
- (id /* block */)composerBlock;
- (void)scrollWithComposer:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;

@end
