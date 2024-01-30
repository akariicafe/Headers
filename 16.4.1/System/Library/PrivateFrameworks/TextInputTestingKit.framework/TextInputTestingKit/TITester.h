@class NSArray, TIReporter;
@protocol TITestHarness;

@interface TITester : NSObject

@property (retain, nonatomic) TIReporter *reporter;
@property (readonly, nonatomic) NSArray *tests;
@property (retain, nonatomic) id<TITestHarness> testHarness;

+ (void)runTestCasesForSource:(id)a0 options:(id)a1 reporter:(id)a2 reportObserver:(id /* block */)a3;
+ (void)runWithTests:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 testHarness:(id)a2 reporter:(id)a3 numTrials:(unsigned long long)a4 reportObserver:(id /* block */)a5;
+ (id)stringByReplacingCurlyQuotesWithStraightQuotes:(id)a0;

- (void).cxx_destruct;
- (id)initWithTests:(id)a0;
- (void)runTestsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 trialID:(unsigned long long)a1;

@end
