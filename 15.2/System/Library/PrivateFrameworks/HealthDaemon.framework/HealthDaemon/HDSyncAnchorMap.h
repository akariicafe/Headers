@class NSString, NSMutableDictionary;

@interface HDSyncAnchorMap : NSObject <HDSyncAnchorMap, NSSecureCoding, NSCopying> {
    NSMutableDictionary *_anchorsByEntityIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncAnchorMapWithSyncAnchorRangeMap:(id)a0;
+ (id)syncAnchorMapWithCodableSyncAnchorRangeMap:(id)a0;
+ (id)syncAnchorMapWithDictionary:(id)a0;

- (void)setAnchor:(long long)a0 forSyncEntity:(Class)a1;
- (id)anchorIfPresentForSyncEntityIdentifier:(id)a0;
- (unsigned long long)anchorCount;
- (void)encodeWithCoder:(id)a0;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(id /* block */)a0;
- (id)codableSyncAnchorRangeMap;
- (void)setAnchor:(long long)a0 forSyncEntityIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)anchorForSyncEntityIdentifier:(id)a0;
- (long long)anchorForSyncEntityClass:(Class)a0;
- (void)setAnchorsFromMap:(id)a0;
- (BOOL)isAllZero;

@end
