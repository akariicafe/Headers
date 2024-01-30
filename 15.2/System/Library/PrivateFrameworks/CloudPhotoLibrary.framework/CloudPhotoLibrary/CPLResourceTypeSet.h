@interface CPLResourceTypeSet : NSObject {
    unsigned long long _baseTypesBits;
    unsigned long long _extraTypeBits;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

- (id)intersectionWithSet:(id)a0;
- (void)enumerateResourceTypesWithBlock:(id /* block */)a0;
- (BOOL)containsResourceType:(unsigned long long)a0;
- (void)addResourceType:(unsigned long long)a0;
- (id)description;
- (BOOL)intersectsWithSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeResourceType:(unsigned long long)a0;
- (id)redactedDescription;
- (id)unionSet:(id)a0;

@end
