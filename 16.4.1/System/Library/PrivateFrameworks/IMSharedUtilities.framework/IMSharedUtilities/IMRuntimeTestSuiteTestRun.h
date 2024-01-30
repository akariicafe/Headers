@class NSArray, NSMutableArray;

@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun {
    NSMutableArray *_testRuns;
}

@property (readonly, copy) NSArray *testRuns;

- (id)init;
- (void).cxx_destruct;
- (void)addTestRun:(id)a0;

@end
