@class NSMutableDictionary, NSMutableArray;

@interface SNTestSuite : NSObject

@property (readonly, nonatomic) NSMutableDictionary *testCases;
@property (readonly, nonatomic) NSMutableArray *subTestSuites;
@property (weak, nonatomic) SNTestSuite *parentTestSuite;

- (id)testRunForTestName:(id)a0;
- (void)addTestCase:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSubTestSuite:(id)a0;
- (id)testSetupList;

@end
