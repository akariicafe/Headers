@class NSSet;

@interface CKSyncEngineFetchChangesScope : NSObject <NSCopying>

@property (readonly, copy) NSSet *zoneIDs;
@property (readonly, copy) NSSet *excludedZoneIDs;

+ (BOOL)scopeWithZoneIDs:(id)a0 recordIDs:(id)a1 excludedZoneIDs:(id)a2 containsScopeWithZoneIDs:(id)a3 recordIDs:(id)a4 excludedZoneIDs:(id)a5;

- (id)init;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsZoneID:(id)a0;
- (BOOL)containsScope:(id)a0;
- (id)initWithExcludedZoneIDs:(id)a0;
- (id)initWithZoneIDs:(id)a0;
- (id)initWithZoneIDs:(id)a0 excludedZoneIDs:(id)a1;

@end
