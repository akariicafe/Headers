@class NSString, NSMutableDictionary;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *anchorsByEntityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)a0;
+ (id)syncAnchorMapWithCodableSyncAnchorRangeMap:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)codableSyncAnchorRangeMap;
- (unsigned long long)anchorCount;
- (void)setAnchorsFromMap:(id)a0;
- (long long)anchorForSyncEntityIdentifier:(id)a0;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (void)setAnchor:(long long)a0 forSyncEntityIdentifier:(id)a1;
- (void)setAnchor:(long long)a0 forSyncEntity:(Class)a1;
- (long long)anchorForSyncEntityClass:(Class)a0;
- (id)anchorIfPresentForSyncEntityIdentifier:(id)a0;
- (BOOL)isAllZero;

@end
