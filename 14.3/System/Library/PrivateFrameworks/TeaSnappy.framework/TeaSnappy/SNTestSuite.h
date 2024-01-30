@class NSMutableDictionary, NSMutableArray;

@interface SNTestSuite : NSObject

@property (readonly, nonatomic) NSMutableDictionary *testCases;
@property (readonly, nonatomic) NSMutableArray *subTestSuites;
@property (weak, nonatomic) SNTestSuite *parentTestSuite;

- (id)init;
- (void).cxx_destruct;
- (void)addTestCase:(id)a0;
- (void)addSubTestSuite:(id)a0;
- (id)testRunForTestName:(id)a0;
- (id)testSetupList;

@end
