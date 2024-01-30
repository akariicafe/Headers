@class NSString, NSData, NSObject, CKDatabase;
@protocol OS_xpc_object, CKSyncEngineDataSource;

@interface CKSyncEngineConfiguration : NSObject <CKPropertiesDescription>

@property (nonatomic) BOOL ignoreSystemConditions;
@property (nonatomic) BOOL useUniqueActivityIdentifiers;
@property (retain, nonatomic) NSString *apsMachServiceName;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL automaticSyncingEnabled;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (retain, nonatomic) CKDatabase *database;
@property (weak, nonatomic) id<CKSyncEngineDataSource> dataSource;
@property (retain, nonatomic) NSData *metadata;
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2;
- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;

@end
