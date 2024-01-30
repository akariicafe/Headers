@class NSMutableDictionary, NSPersistentStoreMap, NSString, NSManagedObjectID;

@interface NSStoreMapNode : NSObject {
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;

- (id)configurationName;
- (const id *)knownKeyValuesPointer;
- (id)objectID;
- (void)dealloc;
- (id)_relatedNodes;
- (id)entity;
- (id)initWithCoder:(id)a0;
- (id)key;
- (unsigned int)_versionNumber;
- (BOOL)isEqual:(id)a0;
- (void)_setMap:(id)a0;
- (void)_setVersionNumber:(unsigned int)a0;
- (id)initWithObjectID:(id)a0;
- (void)setDestinations:(id)a0 forRelationship:(id)a1;
- (id)destinationsForRelationship:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_snapshot_;

@end
