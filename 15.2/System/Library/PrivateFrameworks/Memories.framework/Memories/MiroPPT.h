@class NSString, NSDictionary, UIViewController;

@interface MiroPPT : NSObject

@property (retain, nonatomic) NSString *currentTestName;
@property (retain, nonatomic) NSDictionary *currentTestOptions;
@property (retain, nonatomic) UIViewController *playerViewController;

+ (id)sharedInstance;

- (BOOL)runTest:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (int)currentTestIterations;
- (BOOL)dismissAllModalViewControllers;
- (int)currentTestOffset;
- (int)currentTestLength;
- (void)startedCurrentTest;
- (void)finishedCurrentTest;
- (void)finishedCurrentTestWithExtraResults:(id)a0;
- (void)failedCurrentTest;

@end
