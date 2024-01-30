@interface TSPComponentObjectUUIDMap : NSObject <NSCopying, NSMutableCopying> {
    void *_identifierToUUIDMap;
    void *_uuidToIdentifierMap;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMessage:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)saveToMessage:(void *)a0;
- (id)initWithComponentObjectUUIDMap:(id)a0;
- (void)enumerateIdentifiersAndObjectUUIDsUsingBlock:(id /* block */)a0;
- (long long)identifierForObjectUUID:(id)a0;
- (id)objectUUIDForIdentifier:(long long)a0;

@end
