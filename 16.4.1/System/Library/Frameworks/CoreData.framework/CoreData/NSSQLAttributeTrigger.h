@class NSString, NSArray, NSPredicate, NSSQLRelationship, NSSQLEntity, NSMutableString, NSMutableArray, NSSQLAttribute;

@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension> {
    NSPredicate *_predicate;
    NSString *_predicateString;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_relationship;
    NSSQLEntity *_destinationEntity;
    NSArray *_destinationAttributes;
    NSMutableString *_mToManyInnerFetchWhereClause;
    NSMutableString *_mToManyDecrementWhenClause;
    NSMutableString *_mToManyIncrementWhenClause;
    NSMutableString *_mOfClause;
    NSMutableString *_mOldMatchingClause;
    NSMutableString *_mNewMatchingClause;
    NSMutableString *_mColumnChangedClause;
    NSMutableArray *_mSqlDropStrings;
    NSMutableArray *_mBulkChangeStrings;
}

@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
