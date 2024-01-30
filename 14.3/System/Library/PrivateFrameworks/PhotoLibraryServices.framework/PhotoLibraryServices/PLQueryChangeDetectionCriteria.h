@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject {
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}

@property (readonly) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (void)addAttributeKeyPath:(id)a0 forEntityName:(id)a1;
- (void)addRelationshipKeyPath:(id)a0 forEntityName:(id)a1;
- (id)description;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndAttributesUsingBlock:(id /* block */)a0;

@end
