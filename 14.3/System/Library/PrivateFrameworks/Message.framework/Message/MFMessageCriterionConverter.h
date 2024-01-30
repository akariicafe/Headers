@protocol MFMessageCriterionConverterDelegate;

@interface MFMessageCriterionConverter : NSObject

@property (weak, nonatomic) id<MFMessageCriterionConverterDelegate> delegate;

+ (id)spotlightRecipientSearchPredicateForValue:(id)a0 operator:(unsigned long long)a1;
+ (id)spotlightSenderSearchPredicateForValue:(id)a0 operator:(unsigned long long)a1;
+ (id)spotlightSubjectSearchPredicateForValue:(id)a0 operator:(unsigned long long)a1;
+ (id)spotlightBodySearchPredicateForValue:(id)a0;
+ (id)spotlightSearchPredicateForValue:(id)a0;

- (id)messageCriterionFromPredicate:(id)a0;
- (void).cxx_destruct;
- (id)_messageCriterionForComparisonPredicate:(id)a0;
- (id)_messageCriterionForCompoundPredicate:(id)a0;
- (id)predicateFromMessageCriterion:(id)a0;
- (id)messageCriterionFromPredicateFormatString:(id)a0;
- (id)_defaultKeysForCriterionType:(long long)a0;
- (id)_simplifiedCompoundPredicateOfType:(unsigned long long)a0 forSubqueries:(id)a1;
- (id)_predicateKeysForCriterion:(long long)a0;
- (long long)_criterionTypeFromExpression:(id)a0;
- (long long)_criterionTypeForKey:(id)a0;
- (id)_orPredicateForAttributes:(id)a0 matchingValue:(id)a1 qualifier:(int)a2;
- (long long)_defaultCriterionTypeForKey:(id)a0;
- (id)_searchPredicateForCriterion:(id)a0;
- (id)_predicateForKey:(id)a0 value:(id)a1 qualifier:(int)a2;
- (unsigned long long)_proposedPredicateOperatorType:(unsigned long long)a0 forKey:(id)a1;

@end
