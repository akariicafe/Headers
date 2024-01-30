@class NSMutableDictionary, NSManagedObjectID;

@interface NSAtomicStoreCacheNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned int)_versionNumber;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;

@end
