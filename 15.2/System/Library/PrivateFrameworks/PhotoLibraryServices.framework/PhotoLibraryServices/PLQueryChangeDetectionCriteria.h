@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject {
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}

@property (readonly) BOOL isEmpty;

- (id)description;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndAttributesUsingBlock:(id /* block */)a0;
- (void)addAttributeKeyPath:(id)a0 forEntityName:(id)a1;
- (void)addRelationshipKeyPath:(id)a0 forEntityName:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
