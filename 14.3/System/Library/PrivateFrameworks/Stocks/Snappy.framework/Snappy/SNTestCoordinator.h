@class UIApplication, NSString;

@interface SNTestCoordinator : NSObject <SNTestCoordinating>

@property (readonly, nonatomic) UIApplication *application;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (void)recapScrollTestWithTestName:(id)a0 scrollView:(id)a1 numberOfScreens:(id)a2 direction:(unsigned long long)a3;
- (void)scrollTestWithTestName:(id)a0 scrollView:(id)a1 iterations:(long long)a2 offset:(long long)a3 numberOfScreens:(long long)a4 direction:(unsigned long long)a5;
- (void)scrollTestWithTestName:(id)a0 scrollView:(id)a1 iterations:(long long)a2 offset:(long long)a3 direction:(unsigned long long)a4;
- (void)startedTestWithTestName:(id)a0;
- (void)finishedTestWithTestName:(id)a0 waitForCommit:(BOOL)a1;
- (void)rotateToOrientation:(long long)a0 beforeRotation:(id /* block */)a1 afterRotation:(id /* block */)a2;
- (BOOL)requiresRotationForOrientation:(long long)a0;
- (void)failedTestWithTestName:(id)a0 failureMessage:(id)a1;
- (unsigned long long)axisForDirection:(unsigned long long)a0;
- (long long)lengthForNumberOfScreens:(long long)a0 direction:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
