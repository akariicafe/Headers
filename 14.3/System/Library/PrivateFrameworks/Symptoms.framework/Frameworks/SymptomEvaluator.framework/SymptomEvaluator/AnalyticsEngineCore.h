@class AnalyticsWorkspace, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AnalyticsEngineCore : NSObject {
    AnalyticsWorkspace *workspace;
    NSMutableDictionary *spaces;
    NSObject<OS_dispatch_source> *mem_alerts;
    unsigned int pending_mem_alerts;
    NSDate *lastWorkspaceReset;
    BOOL _enableAdHocDatabaseSave;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isHelper;

+ (id)queue;

- (void)subscribeToNOIsFor:(id)a0 orPredicate:(id)a1 options:(id)a2 connection:(id)a3;
- (void)shutdown;
- (void).cxx_destruct;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 connection:(id)a4 reply:(id /* block */)a5;
- (void)dealloc;
- (id)setOption:(id)a0;
- (void)createSnapshotFor:(id)a0 pred:(id)a1 actions:(id)a2 reply:(id /* block */)a3;
- (void)performQueryOnEntity:(id)a0 pred:(id)a1 sort:(id)a2 actions:(id)a3 service:(id)a4 connection:(id)a5 reply:(id /* block */)a6;
- (void)unsubscribeToNOIs:(id)a0 connection:(id)a1;
- (id)initWithWorkspace:(id)a0 params:(id)a1 queue:(id)a2;
- (void)resetDataFor:(id)a0 nameKind:(id)a1;
- (void)performQueryPostProcessing:(id)a0 actions:(id)a1 processOutcome:(id)a2;
- (int)performQueryOnEntityFromCache:(id)a0 pred:(id)a1 altpred:(id *)a2 actions:(id)a3 found:(id *)a4;
- (id)getOption:(id)a0;
- (void)clientTransactionsRelease;
- (void)clientEvent:(id)a0 isAddEvent:(BOOL)a1;
- (BOOL)handlesEntity:(id)a0;
- (void)_saveAndUnloadAllState;
- (void)performQueryOnEntityCore:(id)a0 pred:(id)a1 sort:(id)a2 actions:(id)a3 service:(id)a4 reply:(id /* block */)a5;
- (id)extractQueryStringFrom:(id)a0 isGeneric:(BOOL *)a1;

@end
