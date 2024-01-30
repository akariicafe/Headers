@class NSMutableDictionary;

@interface HDSyncAnchorRangeMap : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorRangesByEntityIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCodableSyncAnchorRangeMap:(id)a0 error:(id *)a1;
- (unsigned long long)anchorRangeCount;
- (BOOL)getAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; } *)a0 forSyncEntityIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)setAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a0 forSyncEntityIdentifier:(id)a1;
- (id)codableSyncAnchorRangeMap;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateAnchorRangesAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (void)reset;

@end
