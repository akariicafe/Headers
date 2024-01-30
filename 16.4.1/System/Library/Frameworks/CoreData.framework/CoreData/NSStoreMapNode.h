@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject <NSCoding> {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (id)configurationName;
- (id)key;
- (void)encodeWithCoder:(id)a0;
- (id)entity;
- (id)objectID;
- (id)initWithCoder:(id)a0;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (const id *)knownKeyValuesPointer;
- (id)_snapshot_;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)destinationsForRelationship:(id)a0;
- (id)initWithObjectID:(id)a0;

@end
