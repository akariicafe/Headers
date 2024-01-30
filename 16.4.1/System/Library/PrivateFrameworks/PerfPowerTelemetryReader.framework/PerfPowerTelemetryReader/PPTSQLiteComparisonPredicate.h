@interface PPTSQLiteComparisonPredicate : PPTSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) long long comparisonType;
@property (readonly, nonatomic) id value;

+ (id)predicateWithProperty:(id)a0 notEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 lessThanOrEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 containsString:(id)a1;
+ (id)predicateWithProperty:(id)a0 likeValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 lessThanValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 endsWithString:(id)a1;
+ (id)predicateWithProperty:(id)a0 beginsWithString:(id)a1;
+ (id)predicateWithProperty:(id)a0 likePattern:(id)a1;
+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 greaterThanValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithProperty:(id)a0 greaterThanOrEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 likeValue:(id)a1 escapeCharacter:(id)a2;

- (id)initWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (id)_comparisonTypeString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)sqlForEntity:(id)a0;

@end
