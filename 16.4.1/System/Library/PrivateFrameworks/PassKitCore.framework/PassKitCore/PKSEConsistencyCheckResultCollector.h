@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface PKSEConsistencyCheckResultCollector : NSObject {
    NSMutableArray *_requestedActions;
    NSMutableDictionary *_resultSummary;
    BOOL _sendCleanupReasons;
}

@property (nonatomic) BOOL addCleanupActionsToResultsSummary;
@property (readonly, nonatomic) long long cleanupActions;
@property (readonly, nonatomic) NSArray *requestedActions;
@property (readonly, nonatomic) NSDictionary *resultsSummary;

- (id)init;
- (void).cxx_destruct;
- (void)addCleanupActions:(long long)a0;
- (void)addCleanupActions:(long long)a0 cleanupReason:(id)a1 forDeviceCredential:(id)a2 passCredential:(id)a3;

@end
