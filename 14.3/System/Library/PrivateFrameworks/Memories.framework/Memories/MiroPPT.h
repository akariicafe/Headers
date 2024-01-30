@class NSString, NSDictionary, UIViewController;

@interface MiroPPT : NSObject

@property (retain, nonatomic) NSString *currentTestName;
@property (retain, nonatomic) NSDictionary *currentTestOptions;
@property (retain, nonatomic) UIViewController *playerViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)runTest:(id)a0 options:(id)a1;
- (BOOL)dismissAllModalViewControllers;
- (int)currentTestIterations;
- (int)currentTestOffset;
- (int)currentTestLength;
- (void)startedCurrentTest;
- (void)finishedCurrentTest;
- (void)finishedCurrentTestWithExtraResults:(id)a0;
- (void)failedCurrentTest;

@end
