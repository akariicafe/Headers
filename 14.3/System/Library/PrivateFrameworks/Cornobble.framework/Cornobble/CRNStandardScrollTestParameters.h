@class NSString;

@interface CRNStandardScrollTestParameters : CRNGroupScrollTestParameters {
    NSString *_testName;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollingBounds;
@property (nonatomic) double amplitude;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL preventDismissalGestures;
@property (nonatomic) double iterationDuration;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) BOOL shouldFlick;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)parametersForTestName:(id)a0 scrollView:(id)a1 iterations:(unsigned long long)a2 direction:(long long)a3 preventDismissalGestures:(BOOL)a4 canUseFlicks:(BOOL)a5;
+ (id)parametersForTestName:(id)a0 scrollView:(id)a1 iterations:(unsigned long long)a2 direction:(long long)a3 preventDismissalGestures:(BOOL)a4 canUseFlicks:(BOOL)a5 completionHandler:(id /* block */)a6;
+ (id)parametersForTestName:(id)a0 scrollView:(id)a1 iterations:(unsigned long long)a2 preventDismissalGestures:(BOOL)a3 canUseFlicks:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (id)parametersForTestName:(id)a0 scrollView:(id)a1 iterations:(unsigned long long)a2 amplitude:(double)a3 direction:(long long)a4 preventDismissalGestures:(BOOL)a5 canUseFlicks:(BOOL)a6 completionHandler:(id /* block */)a7;

- (id)testName;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 amplitude:(double)a3 direction:(long long)a4 preventDismissalGestures:(BOOL)a5 iterationDuration:(double)a6 canUseFlicks:(BOOL)a7 completionHandler:(id /* block */)a8;
- (id)initWithTestName:(id)a0 iterations:(unsigned long long)a1 scrollingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 amplitude:(double)a3 direction:(long long)a4 preventDismissalGestures:(BOOL)a5 iterationDuration:(double)a6 canUseFlicks:(BOOL)a7;
- (id /* block */)composerBlock;
- (void)setTestName:(id)a0;

@end
