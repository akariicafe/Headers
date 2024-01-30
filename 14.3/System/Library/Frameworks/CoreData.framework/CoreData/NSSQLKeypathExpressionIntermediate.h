@interface NSSQLKeypathExpressionIntermediate : NSSQLExpressionIntermediate

@property (nonatomic) BOOL substitutePK;

- (id)generateSQLStringInContext:(id)a0;
- (id)_propertyDescriptionsForKeypath:(id)a0 rootedAtEntity:(id)a1 allowToMany:(BOOL)a2 allowToOne:(BOOL)a3 lastKeyVisited:(id *)a4 inContext:(id)a5;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_propertyDescriptionForKeypath:(id)a0 startingAtEntity:(id)a1 allowToMany:(BOOL)a2 allowToOne:(BOOL)a3 lastKeyVisited:(id *)a4 inContext:(id)a5;
- (id)_generateSQLForProperty:(id)a0 startEntity:(id)a1 startAlias:(id)a2 keypath:(id)a3 inContext:(id)a4;

@end
