@class NSManagedObjectModel, NSMutableDictionary, NSRecursiveLock;

@interface PFUbiquityMetadataFactory : NSObject {
    NSMutableDictionary *_rootLocationToPeerIDToEntry;
    NSRecursiveLock *_rootLocationToPeerIDToEntryLock;
    NSManagedObjectModel *_cachedModel;
}

+ (void)initialize;
+ (void)_invalidateStaticCaches;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)addModelingToolUserInfoToEntity:(id)a0;
- (void)addModelingToolUserInfoToProperty:(id)a0;
- (id)createMetadataModel;
- (id)newAttributeNamed:(id)a0 attributeType:(unsigned long long)a1 isOptional:(BOOL)a2 isTransient:(BOOL)a3 withDefaultValue:(id)a4 andMinValue:(id)a5 andMaxValue:(id)a6;
- (id)newEntityForName:(id)a0;
- (id)newRelationshipNamed:(id)a0 withDestinationEntity:(id)a1 andInverseRelationship:(id)a2 isOptional:(BOOL)a3 isToMany:(BOOL)a4 andDeleteRule:(unsigned long long)a5;

@end
