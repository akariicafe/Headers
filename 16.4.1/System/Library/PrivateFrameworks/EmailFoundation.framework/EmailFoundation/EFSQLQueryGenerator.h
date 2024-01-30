@interface EFSQLQueryGenerator : NSObject

+ (id)selectExpressionGeneratorForReturnObjectKeypath:(id)a0 propertyMapper:(id)a1;
+ (id)compiledSQLQueryWithPredicateNodes:(id)a0 selectGenerators:(id)a1 orderByGenerators:(id)a2 selectAll:(BOOL)a3;
+ (id)expressionGeneratorsForSortDescriptors:(id)a0 propertyMapper:(id)a1;
+ (id)getChildrenFromPropertyMapper:(id)a0 previousTable:(id)a1 previousExpressionGenerator:(id)a2;
+ (id)sqlQueryForReturnObjectKeypaths:(id)a0 query:(id)a1 propertyMapper:(id)a2;
+ (id)traverseKeypath:(id)a0 keyPropertyMapper:(id)a1 previousExpressionGenerator:(id)a2;

@end
