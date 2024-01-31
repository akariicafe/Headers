@class CKRecordZone;

@interface CKSyncEnginePendingZoneSave : CKSyncEnginePendingDatabaseChange

@property (readonly, copy, nonatomic) CKRecordZone *zone;

+ (BOOL)supportsSecureCoding;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)zoneID;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithZone:(id)a0;
- (id)CKDescriptionClassName;
- (id)oppositeTypeChange;

@end
