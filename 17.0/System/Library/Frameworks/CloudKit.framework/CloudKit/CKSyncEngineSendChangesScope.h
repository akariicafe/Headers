@class NSSet;

@interface CKSyncEngineSendChangesScope : NSObject <NSCopying>

@property (readonly, copy) NSSet *zoneIDs;
@property (readonly, copy) NSSet *excludedZoneIDs;
@property (readonly, copy) NSSet *recordIDs;

- (id)init;
- (id)redactedDescription;
- (id)initWithRecordIDs:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsZoneOrRecordWithZoneID:(id)a0;
- (BOOL)containsPendingRecordZoneChange:(id)a0;
- (BOOL)containsRecordID:(id)a0;
- (BOOL)containsScope:(id)a0;
- (id)initWithExcludedZoneIDs:(id)a0;
- (id)initWithZoneIDs:(id)a0;
- (id)initWithZoneIDs:(id)a0 excludedZoneIDs:(id)a1 recordIDs:(id)a2;

@end
