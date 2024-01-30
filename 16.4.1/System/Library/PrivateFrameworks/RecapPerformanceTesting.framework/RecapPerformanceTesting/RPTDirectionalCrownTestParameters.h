@class NSString;

@interface RPTDirectionalCrownTestParameters : NSObject <RPTTestParameters>

@property (readonly, copy, nonatomic) id /* block */ composerBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) struct CGSize { double width; double height; } scrollingSize;
@property (nonatomic) long long direction;
@property (nonatomic) double screenSpaceMultiplier;
@property (nonatomic) double rotationDuration;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL managesTestStartAndEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareWithComposer:(id)a0;
- (id)initWithTestName:(id)a0 scrollView:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithTestName:(id)a0 scrollingSize:(struct CGSize { double x0; double x1; })a1 screenSpaceMultiplier:(double)a2 rotationDuration:(double)a3 direction:(long long)a4 completionHandler:(id /* block */)a5;

@end
