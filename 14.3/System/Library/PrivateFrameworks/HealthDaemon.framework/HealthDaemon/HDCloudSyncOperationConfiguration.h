@class NSString, NSUUID, HDAssertion, CKOperationGroup, HDCloudSyncRepository, NSDictionary;

@interface HDCloudSyncOperationConfiguration : NSObject

@property (readonly, nonatomic) HDCloudSyncRepository *repository;
@property (readonly, nonatomic) CKOperationGroup *operationGroup;
@property (readonly, copy, nonatomic) NSString *syncContainerPrefix;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long reason;
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier;
@property (readonly, nonatomic) HDAssertion *accessibilityAssertion;
@property (readonly, copy, nonatomic) NSDictionary *analyticsDictionary;
@property (readonly, copy, nonatomic) NSString *shortSyncIdentifier;
@property (readonly, nonatomic) BOOL rebaseProhibited;

- (void).cxx_destruct;
- (void)dealloc;
- (id)pushStoreWithIdentifier:(id)a0 container:(id)a1 error:(id *)a2;
- (id)pushStoreIdentifierForContainer:(id)a0 error:(id *)a1;
- (id)databaseForContainer:(id)a0;
- (id)descriptionForSignpost;
- (id)initWithRepository:(id)a0 operationGroup:(id)a1 syncContainerPrefix:(id)a2 options:(unsigned long long)a3 reason:(long long)a4 accessibilityAssertion:(id)a5 syncIdentifier:(id)a6;

@end
