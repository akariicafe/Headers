@class IMUnitTestLogger, NSString, IMUnitTestBundleLoader, IMUnitTestFrameworkLoader, NSMutableArray;
@protocol IMUnitTestRunnerDelegate;

@interface IMUnitTestRunner : NSObject <XCTestObservation>

@property (weak) id<IMUnitTestRunnerDelegate> delegate;
@property (readonly) IMUnitTestBundleLoader *bundleLoader;
@property (readonly) IMUnitTestLogger *logger;
@property (readonly) IMUnitTestFrameworkLoader *frameworkLoader;
@property (readonly) NSMutableArray *failedTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)log:(id)a0;
- (id)init;
- (id)dateFormatter;
- (void).cxx_destruct;
- (id)runTestsInBundleAtPath:(id)a0 error:(id *)a1;
- (BOOL)_loadFrameworksIfNeeded:(id *)a0;
- (id)descriptionFromResult:(id)a0;
- (id)initWithLogger:(id)a0 bundleLoader:(id)a1;
- (id)initWithLogger:(id)a0 bundleLoader:(id)a1 frameworkLoader:(id)a2;
- (void)logBanner:(id)a0;
- (id)pathToPluginBundle:(id)a0;
- (long long)runTestsInBundleAtPath:(id)a0;
- (id)runTestsInBundleNamed:(id)a0 error:(id *)a1;
- (void)testCase:(id)a0 didFailWithDescription:(id)a1 inFile:(id)a2 atLine:(unsigned long long)a3;
- (void)testCaseDidFinish:(id)a0;
- (void)testCaseWillStart:(id)a0;
- (void)testLogWithFormat:(id)a0;
- (void)testSuite:(id)a0 didFailWithDescription:(id)a1 inFile:(id)a2 atLine:(unsigned long long)a3;
- (void)testSuiteDidFinish:(id)a0;
- (void)testSuiteWillStart:(id)a0;

@end
