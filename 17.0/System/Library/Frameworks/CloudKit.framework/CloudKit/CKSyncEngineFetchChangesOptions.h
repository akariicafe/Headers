@class NSArray, NSDictionary, NSString, CKOperationGroup, CKSyncEngineFetchChangesZoneConfiguration, CKSyncEngineFetchChangesScope;

@interface CKSyncEngineFetchChangesOptions : NSObject <CKPropertiesDescription, NSCopying>

@property (nonatomic) BOOL forceFetchChanges;
@property (copy) NSDictionary *zoneConfigurations;
@property (copy) CKSyncEngineFetchChangesZoneConfiguration *defaultZoneConfiguration;
@property (copy) CKSyncEngineFetchChangesScope *scope;
@property (retain) CKOperationGroup *operationGroup;
@property (copy) NSArray *prioritizedZoneIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)initWithScope:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithZoneIDs:(id)a0;
- (void)setOperationGroup:(id)a0 updateName:(BOOL)a1;
- (void)updateOperationGroupName;

@end
