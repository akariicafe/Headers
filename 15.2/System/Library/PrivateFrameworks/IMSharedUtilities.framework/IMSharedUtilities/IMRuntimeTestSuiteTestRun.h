@class NSArray, NSMutableArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
    NSMutableArray *_testRuns;
}

@property (readonly, copy) NSArray *testRuns;

- (void)addTestRun:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
