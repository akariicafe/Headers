@class C2SessionPool;

@interface C2RequestManager : NSObject

@property (readonly, nonatomic) C2SessionPool *sessionPool;

+ (void)initialize;
+ (id)sharedManager;

- (id)testUtility_sessionForTask:(id)a0;
- (void).cxx_destruct;
- (id)createDataTaskWithRequest:(id)a0 options:(id)a1 delegate:(id)a2;
- (id)createDataTaskWithRequest:(id)a0 options:(id)a1 delegate:(id)a2 sessionHandle:(id *)a3;
- (id)init;
- (id)testUtility_sessionTaskForTask:(id)a0;
- (void)_testUtility_forTask:(id)a0 sessionHandle:(id *)a1 taskHandle:(id *)a2;

@end
