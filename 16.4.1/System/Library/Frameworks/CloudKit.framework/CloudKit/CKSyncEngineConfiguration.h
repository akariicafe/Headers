@class NSString, NSData, NSObject, CKDatabase;
@protocol OS_xpc_object, CKSyncEngineDataSource;

@interface CKSyncEngineConfiguration : NSObject <CKPropertiesDescription>

@property (nonatomic) BOOL ignoreSystemConditions;
@property (nonatomic) BOOL useUniqueActivityIdentifiers;
@property (retain, nonatomic) NSString *apsMachServiceName;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL automaticSyncingEnabled;
@property (nonatomic) BOOL continueModifyingPendingChangesAfterFailure;
@property (nonatomic) BOOL allowFetchAndModifyConcurrently;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (nonatomic) BOOL useOpportunisticPushTopic;
@property (retain, nonatomic) CKDatabase *database;
@property (weak, nonatomic) id<CKSyncEngineDataSource> dataSource;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)redactedDescription;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
