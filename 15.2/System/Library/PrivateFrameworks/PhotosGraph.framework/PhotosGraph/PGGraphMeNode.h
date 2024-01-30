@interface PGGraphMeNode : PGGraphPersonNode

+ (id)filter;

- (id)label;
- (void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateSocialGroupNodesForRelationshipLabel:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_status:(unsigned long long)a0 fitsQuery:(unsigned long long)a1;
- (void)_enumerateRelationshipWithLabel:(id)a0 matchingQuery:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_relationshipLabelForRelationship:(unsigned long long)a0;
- (void)enumeratePersonNodesWithRelationship:(unsigned long long)a0 matchingQuery:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)relationshipEdgesToPersonNode:(id)a0 matchingQuery:(unsigned long long)a1;

@end
