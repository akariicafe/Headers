@class NSMutableDictionary, NSManagedObjectID;

@interface NSAtomicStoreCacheNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSMutableDictionary *propertyCache;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (id)_snapshot_;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (unsigned int)_versionNumber;
- (BOOL)isEqual:(id)a0;
- (id)valueForKey:(id)a0;
- (const id *)knownKeyValuesPointer;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;

@end
