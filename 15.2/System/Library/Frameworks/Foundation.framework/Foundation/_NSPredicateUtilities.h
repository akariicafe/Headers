@interface _NSPredicateUtilities : NSObject

+ (id)log:(id)a0;
+ (id)now;
+ (id)randomn:(id)a0;
+ (void)initialize;
+ (id)multiply:(id)a0 by:(id)a1;
+ (id)stddev:(id)a0;
+ (id)sum:(id)a0;
+ (id)min:(id)a0;
+ (id)mode:(id)a0;
+ (id)modulus:(id)a0 by:(id)a1;
+ (id)inverseOrderKey:(id)a0;
+ (id)lowercase:(id)a0;
+ (id)random;
+ (id)raise:(id)a0 toPower:(id)a1;
+ (id)floor:(id)a0;
+ (void)_setDebugPredicateTestAction:(BOOL)a0;
+ (id)_expressionClassesForSecureCoding;
+ (id)onesComplement:(id)a0;
+ (id)bitwiseXor:(id)a0 with:(id)a1;
+ (id)canonical:(id)a0;
+ (id)_constantValueClassesForSecureCoding;
+ (id)objectFrom:(id)a0 withIndex:(id)a1;
+ (id)add:(id)a0 to:(id)a1;
+ (id)indexed:(id)a0 by:(id)a1;
+ (id)count:(id)a0;
+ (id)_compoundPredicateClassesForSecureCoding;
+ (id)_extendedExpressionClassesForSecureCoding;
+ (id)bitwiseAnd:(id)a0 with:(id)a1;
+ (id)ln:(id)a0;
+ (id)leftshift:(id)a0 by:(id)a1;
+ (id)sqrt:(id)a0;
+ (id)divide:(id)a0 by:(id)a1;
+ (id)average:(id)a0;
+ (id)castObject:(id)a0 toType:(id)a1;
+ (id)tokenize:(id)a0 using:(id)a1;
+ (id)trunc:(id)a0;
+ (id)bitwiseOr:(id)a0 with:(id)a1;
+ (id)exp:(id)a0;
+ (id)median:(id)a0;
+ (id)rightshift:(id)a0 by:(id)a1;
+ (id)uppercase:(id)a0;
+ (id)noindex:(id)a0;
+ (id)distanceToLocation:(id)a0 fromLocation:(id)a1;
+ (id)_operatorClassesForSecureCoding;
+ (id)max:(id)a0;
+ (id)ceiling:(id)a0;
+ (id)distinct:(id)a0;
+ (id)length:(id)a0;
+ (id)_predicateClassesForSecureCoding;
+ (BOOL)_isReservedWordInParser:(id)a0;
+ (void)_setDebugPredicateSecurityScoping:(BOOL)a0;
+ (id)from:(id)a0 subtract:(id)a1;
+ (id)abs:(id)a0;

- (double)distanceFromLocation:(id)a0;

@end
