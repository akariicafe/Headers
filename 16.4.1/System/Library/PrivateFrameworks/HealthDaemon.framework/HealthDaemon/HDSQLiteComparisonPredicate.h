@protocol NSObject;

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying> {
    BOOL _influenceIndexUsage;
}

@property (readonly, nonatomic) long long comparisonType;
@property (readonly, nonatomic) id<NSObject> value;

+ (id)predicateWithProperty:(id)a0 notEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 lessThanOrEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2 influenceIndexUsage:(BOOL)a3;
+ (id)predicateWithProperty:(id)a0 containsString:(id)a1;
+ (id)predicateWithProperty:(id)a0 likeValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 lessThanValue:(id)a1;
+ (id)predicateWithCoalescedProperties:(id)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithProperty:(id)a0 endsWithString:(id)a1;
+ (id)predicateWithProperty:(id)a0 beginsWithString:(id)a1;
+ (id)predicateWithProperty:(id)a0 likePattern:(id)a1;
+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 ifNullValue:(id)a1 value:(id)a2 comparisonType:(long long)a3;
+ (id)predicateWithProperty:(id)a0 greaterThanValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithProperty:(id)a0 greaterThanOrEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 comparisonType:(long long)a1 subqueryDescriptor:(id)a2 subqueryProperties:(id)a3;
+ (id)predicateWithProperty:(id)a0 likeValue:(id)a1 escapeCharacter:(id)a2;

- (id)initWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (id)SQLForEntityClass:(Class)a0;
- (BOOL)isCompatibleWithPredicate:(id)a0;
- (id)initWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2 influenceIndexUsage:(BOOL)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(int *)a1;
- (id)description;
- (void).cxx_destruct;

@end
