@class NSString, SNTestSuite;
@protocol SNTestCase;

@interface SNTestRun : NSObject <SNTestRunOptions>

@property (readonly, nonatomic) id<SNTestCase> testCase;
@property (readonly, nonatomic) SNTestSuite *testSuite;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL waitForCommitToFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
