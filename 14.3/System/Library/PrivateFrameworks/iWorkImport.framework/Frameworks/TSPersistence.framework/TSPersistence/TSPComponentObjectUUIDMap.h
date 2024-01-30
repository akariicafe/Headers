@class NSDictionary;

@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSDictionary *identifierToObjectUUIDDictionary;
@property (readonly, nonatomic) NSDictionary *objectUUIDToIdentifierDictionary;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(const struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } *)a0;
- (void)saveToMessage:(struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } *)a0;
- (void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(id /* block */)a0;
- (long long)identifierForObjectUUID:(id)a0;
- (id)initWithIdentifierToObjectUUIDDictionary:(id)a0 objectUUIDToIdentifierDictionary:(id)a1;
- (id)objectUUIDForIdentifier:(long long)a0;

@end
