@interface ABPredicate : NSPredicate

+ (id)personPredicateWithPhoneLike:(id)a0 countryHint:(id)a1 addressBook:(void *)a2;
+ (id)personPredicateWithNameLike:(id)a0 group:(void *)a1 source:(void *)a2 account:(id)a3 includeSourceInResults:(BOOL)a4 addressBook:(void *)a5;
+ (id)personPredicateWithNameLike:(id)a0 groups:(id)a1 sources:(id)a2 includeSourceInResults:(BOOL)a3 addressBook:(void *)a4;
+ (id)personPredicateWithNameLike:(id)a0 groups:(id)a1 sources:(id)a2 includeSourceInResults:(BOOL)a3 includePhotosInResults:(BOOL)a4 addressBook:(void *)a5;
+ (id)personPredicateWithNameLike:(id)a0 addressBook:(void *)a1;
+ (id)personPredicateWithAnyValueForProperty:(int)a0;
+ (id)newQueryWithProperties:(id)a0 joins:(id)a1 whereString:(id)a2 sortOrder:(unsigned int)a3 rankString:(id)a4 groupByProperties:(id)a5 addressBook:(void *)a6 propertyIndices:(const struct __CFDictionary **)a7;
+ (id)personPredicateWithNameLike:(id)a0 groups:(id)a1 sources:(id)a2 addressBook:(void *)a3;
+ (id)personPredicateWithNameLike:(id)a0 group:(void *)a1 source:(void *)a2 account:(id)a3 addressBook:(void *)a4;
+ (id)personPredicateWithName:(id)a0 addressBook:(void *)a1;
+ (id)personPredicateWithGroup:(void *)a0 source:(void *)a1 account:(id)a2;
+ (id)newQueryFromABPredicate:(id)a0 withSortOrder:(unsigned int)a1 ranked:(BOOL)a2 addressBook:(void *)a3 propertyIndices:(const struct __CFDictionary **)a4;
+ (id)newQueryFromCompoundPredicate:(id)a0 withSortOrder:(unsigned int)a1 ranked:(BOOL)a2 addressBook:(void *)a3 propertyIndices:(const struct __CFDictionary **)a4;
+ (void)searchPeopleWithPredicate:(id)a0 sortOrder:(unsigned int)a1 inAddressBook:(void *)a2 withDelegate:(id)a3;
+ (id)personPredicateWithNameOnly:(id)a0 account:(id)a1 addressBook:(void *)a2;
+ (void)searchPeopleWithPredicate:(id)a0 sortOrder:(unsigned int)a1 ranked:(BOOL)a2 inAddressBook:(void *)a3 withDelegate:(id)a4;
+ (id)personPredicateWithValue:(id)a0 comparison:(long long)a1 forProperty:(int)a2;

- (id)predicateFormat;
- (id)init;
- (BOOL)hasCallback;
- (void)bindString:(id)a0 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a1 withBindingOffset:(int *)a2;
- (id)queryWhereStringForPredicateIdentifier:(int)a0;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (id)querySelectPropertiesForPredicateIdentifier:(int)a0;
- (id)queryJoinsInCompound:(BOOL)a0 predicateIdentifier:(int)a1;
- (id)queryRankStringForPredicateIdentifier:(int)a0;
- (void)dealloc;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (id)callbackContext;
- (id)queryGroupByProperties;
- (id)_querySelectStringForPredicateIdentifier:(int)a0;
- (void)bindDouble:(double)a0 toStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a1 withBindingOffset:(int *)a2;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { } *)a0 predicateContext:(id)a1 values:(struct sqlite3_value **)a2 count:(int)a3;
- (BOOL)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)a0 ranked:(BOOL)a1 addressBook:(void *)a2 propertyIndices:(const struct __CFDictionary **)a3;
- (void)ab_addCallbackContextToArray:(id)a0;
- (id)querySerializationIdentifier;
- (BOOL)isValid;

@end
