@class NSArray;
@protocol NSObject;

@interface ABValuePredicate : ABPredicate {
    NSArray *_orderedKeys;
    BOOL _dictionaryValue;
}

@property (nonatomic) int property;
@property (nonatomic) long long comparison;
@property (copy, nonatomic) id<NSObject> value;

+ (id)stringForComparison:(id)a0 withComparision:(long long)a1;

- (id)predicateFormat;
- (id)init;
- (id)queryWhereStringForPredicateIdentifier:(int)a0;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection *x0; struct sqlite3_stmt *x1; double x2; BOOL x3; } *)a0 withBindingOffset:(int *)a1 predicateIdentifier:(int)a2;
- (id)querySelectPropertiesForPredicateIdentifier:(int)a0;
- (id)queryJoinsInCompound:(BOOL)a0 predicateIdentifier:(int)a1;
- (void)dealloc;
- (BOOL)_shouldConsultIndexForKey:(id)a0;
- (BOOL)_supportsFTSSearch;
- (BOOL)_allowsLaxCheckingForFTS;
- (id)_ftsTermStringForString:(id)a0;
- (id)_ftsTokenizedTermStringForString:(id)a0;
- (id)stringForComparison:(id)a0;
- (id)_ftsAllQueryStrings;
- (BOOL)isValid;

@end
