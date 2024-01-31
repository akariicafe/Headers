@interface CKSyncEnginePendingZoneDelete : CKSyncEnginePendingDatabaseChange

+ (BOOL)supportsSecureCoding;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithZoneID:(id)a0;
- (id)CKDescriptionClassName;
- (id)oppositeTypeChange;

@end
