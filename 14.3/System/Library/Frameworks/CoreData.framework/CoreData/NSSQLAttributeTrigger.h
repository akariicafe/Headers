@class NSString, NSSQLRelationship, NSPredicate, NSArray, NSSQLEntity, NSMutableString, NSMutableArray, NSSQLAttribute;

@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension> {
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

@property (readonly) NSSQLEntity *entity;
@property (readonly) NSSQLAttribute *attribute;
@property (readonly) NSString *predicateString;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSSQLRelationship *relationship;
@property (readonly) NSSQLEntity *destinationEntity;
@property (readonly) NSArray *destinationAttributes;
@property (readonly) NSString *toManyInnerFetchWhereClause;
@property (readonly) NSString *toManyDecrementWhenClause;
@property (readonly) NSString *toManyIncrementWhenClause;
@property (readonly) NSString *ofClause;
@property (readonly) NSString *oldMatchingClause;
@property (readonly) NSString *newMatchingClause;
@property (readonly) NSString *columnChangedClause;
@property (readonly, nonatomic) NSArray *insertSQLStrings;
@property (readonly, nonatomic) NSArray *dropSQLStrings;
@property (readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateComparisonPredicate:(id)a0 error:(id *)a1;
- (BOOL)isEqualToExtension:(id)a0;
- (void)dealloc;
- (BOOL)parseTriggerPredicateError:(id *)a0;
- (BOOL)validatePredicate:(id)a0 error:(id *)a1;
- (id)createSQLStrings:(id *)a0;
- (BOOL)isSupportedOperatorType:(unsigned long long)a0;
- (BOOL)validate:(id *)a0;
- (id)initWithObjectFromUserInfo:(id)a0 onAttributeNamed:(id)a1 onEntity:(id)a2;
- (id)inverseOperatorSymbolForOperator:(id)a0;

@end
