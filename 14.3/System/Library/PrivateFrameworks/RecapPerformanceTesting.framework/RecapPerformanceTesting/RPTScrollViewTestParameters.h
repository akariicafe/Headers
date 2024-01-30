@class NSString, RCPSyntheticEventStream;

@interface RPTScrollViewTestParameters : NSObject <RPTScrollTestParameters, RPTBlockBasedScrollTestParameters>

@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) double amplitude;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL preventSheetDismissal;
@property (nonatomic) double iterationDurationFactor;
@property (nonatomic) BOOL shouldFlick;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) RCPSyntheticEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithTestName:(id)a0 scrollBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 amplitude:(double)a2 direction:(long long)a3 completionHandler:(id /* block */)a4;
+ (id)newWithTestName:(id)a0 scrollView:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;

@end
