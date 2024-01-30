@interface PGGraphRelationshipEdgeCollection : PGGraphEdgeCollection

+ (Class)edgeClass;
+ (id)inferredRelationshipEdgesInGraph:(id)a0;
+ (id)confirmedRelationshipEdgesInGraph:(id)a0;

- (id)relationshipLabels;

@end
