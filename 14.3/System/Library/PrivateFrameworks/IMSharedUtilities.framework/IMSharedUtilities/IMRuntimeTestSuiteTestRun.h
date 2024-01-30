@class NSArray, NSMutableArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
    NSMutableArray *_testRuns;
}

@property (readonly, copy) NSArray *testRuns;

- (id)init;
- (void)addTestRun:(id)a0;
- (void).cxx_destruct;

@end
