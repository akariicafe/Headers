@class NSMutableDictionary;

@interface PHQueryChangeDetectionCriteria : NSObject <NSCopying> {
    NSMutableDictionary *_attributeIndexValuesByEntityName;
    NSMutableDictionary *_relationshipIndexValuesByEntityName;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)changeDetectionCriteriaByAddingChangeDetectionCriteria:(id)a0;
- (void)enumerateEntitiesAndAttributeIndexesUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndRelationshipIndexesBlock:(id /* block */)a0;
- (id)initWithPLQueryChangeDetectionCriteria:(id)a0;

@end
