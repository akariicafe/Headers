@class NSString, RPTCoordinateSpaceConverter;

@interface RPTPagingScrollTestParameters : NSObject <_RPTCoordinateSpaces, RPTTestParameters>

@property (readonly, nonatomic) long long realDirection;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) double amplitude;
@property (nonatomic) long long direction;
@property (nonatomic) double iterationDuration;
@property (nonatomic) BOOL useFlicks;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;
@property (copy, nonatomic) NSString *testName;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)composerBlock;
- (void)prepareWithComposer:(id)a0;
- (void).cxx_destruct;
- (void)scrollWithComposer:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 amplitude:(double)a3 direction:(long long)a4 iterationDuration:(double)a5 useFlicks:(BOOL)a6 completionHandler:(id /* block */)a7;
- (struct pair<CGPoint, CGPoint> { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; })initialAndFinalPositions;

@end
