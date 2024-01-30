@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject <NSCoding> {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;

- (id)entity;
- (id)configurationName;
- (void)encodeWithCoder:(id)a0;
- (id)objectID;
- (id)key;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;
- (id)destinationsForRelationship:(id)a0;
- (const id *)knownKeyValuesPointer;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (id)_snapshot_;

@end
