@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *anchorRangesByEntityIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)codableSyncAnchorRangeMap;
- (id)initWithCodableSyncAnchorRangeMap:(id)a0 error:(id *)a1;
- (unsigned long long)anchorRangeCount;
- (BOOL)getAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; } *)a0 forSyncEntityIdentifier:(id)a1;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a0 forSyncEntityIdentifier:(id)a1;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id /* block */)a0;

@end
