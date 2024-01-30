@class NSString, NSMutableArray, NSMutableDictionary;

@interface SNTestStore : NSObject <SNTestRunFactory>

@property (readonly, nonatomic) NSMutableArray *testSuites;
@property (readonly, nonatomic) NSMutableDictionary *testCases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addTestCase:(id)a0;
- (void)addTestSuite:(id)a0;
- (id)testRunForTestName:(id)a0;

@end
