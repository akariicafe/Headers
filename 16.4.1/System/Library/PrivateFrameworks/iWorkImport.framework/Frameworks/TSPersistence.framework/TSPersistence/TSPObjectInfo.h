@class NSArray, NSSet, NSHashTable, NSMutableSet, TSPReferenceOrderedSet;

@interface TSPObjectInfo : NSObject {
    NSHashTable *_referencedDataHashTable;
    TSPReferenceOrderedSet *_referencedObjectsSet;
    NSMutableSet *_referencedObjectUUIDs;
    NSArray *_referencedData;
    NSArray *_referencedObjects;
}

@property (readonly, nonatomic) NSArray *referencedData;
@property (readonly, nonatomic) NSArray *referencedObjects;
@property (readonly, nonatomic) NSSet *referencedObjectUUIDs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 referenceDepth:(unsigned long long)a1;
- (void)visitObject:(id)a0 rootObject:(id)a1 referenceDepth:(unsigned long long)a2;
- (void)visitObjectReferences:(id)a0 rootObject:(id)a1 referenceDepth:(unsigned long long)a2;

@end
