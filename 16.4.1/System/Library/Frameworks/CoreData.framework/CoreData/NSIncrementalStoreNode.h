@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
    NSManagedObjectID *_objectID;
    unsigned long long _versionNumber;
    id _propertyCache;
    void *_reserved1;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) unsigned long long version;

+ (void)initialize;

- (void)updateWithValues:(id)a0 version:(unsigned long long)a1;
- (unsigned int)_versionNumber;
- (id)initWithObjectID:(id)a0 withValues:(id)a1 version:(unsigned long long)a2;
- (void)dealloc;
- (id)valueForPropertyDescription:(id)a0;
- (const id *)knownKeyValuesPointer;
- (id)initWithObjectID:(id)a0 fromSQLRow:(id)a1;
- (id)_propertyCache;
- (id)description;
- (id)_snapshot_;

@end
