@class NSManagedObjectModel, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityMetadataFactory : NSObject {
    NSMutableDictionary *_rootLocationToPeerIDToEntry;
    NSRecursiveLock *_rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel *_cachedModel;
}

+ (void)initialize;
+ (id)sharedFactory;
+ (void)_invalidateStaticCaches;

- (id)newRelationshipNamed:(id)a0 withDestinationEntity:(id)a1 andInverseRelationship:(id)a2 isOptional:(BOOL)a3 isToMany:(BOOL)a4 andDeleteRule:(unsigned long long)a5;
- (id)init;
- (id)newMetadataManagedObjectModel;
- (void)dealloc;
- (id)newStackForLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2 error:(id *)a3;
- (id)description;
- (id)entryForLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2;
- (void)removeCachedCoordinatorsForLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2;
- (BOOL)cacheEntryForLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2 error:(id *)a3;
- (id)newMetadataEntryForLocalPeerID:(id)a0 storeName:(id)a1 andUbiquityRootLocation:(id)a2 error:(id *)a3;
- (id)createMetadataModel;
- (id)newEntityForName:(id)a0;
- (void)addModelingToolUserInfoToEntity:(id)a0;
- (id)newAttributeNamed:(id)a0 attributeType:(unsigned long long)a1 isOptional:(BOOL)a2 isTransient:(BOOL)a3 withDefaultValue:(id)a4 andMinValue:(id)a5 andMaxValue:(id)a6;
- (void)addModelingToolUserInfoToProperty:(id)a0;
- (void)removeAllCoordinatorsForRootLocation:(id)a0;

@end
