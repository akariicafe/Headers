@class CKSyncEngineSendChangesScope, CKOperationGroup, NSString;

@interface CKSyncEngineSendChangesOptions : NSObject <CKPropertiesDescription, NSCopying>

@property (copy) CKSyncEngineSendChangesScope *scope;
@property (retain) CKOperationGroup *operationGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)zoneIDs;
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
