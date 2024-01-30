@interface NSSQLDerivedAttributeSQLGenerator : NSObject

+ (id)_parameterPropertyTokenForDerivedAttribute:(id)a0 andKeypath:(id)a1 onEntity:(id)a2;
+ (id)_computeNewColumnTokenForKeypathExpression:(id)a0 governingEntity:(id)a1;
+ (id)_computeSingleParameterTokenForFunctionAttribute:(id)a0 functionName:(id)a1;
+ (id)_computeNowTokenForFunctionAttribute:(id)a0;
+ (id)_computeNewColumnTokenForKeypathAttribute:(id)a0;
+ (id)_triggerColumnListComponentForAttributeKeypaths:(id)a0 startingAt:(id)a1;
+ (id)_triggerColumnWhereComponentForAttributeKeypaths:(id)a0 startingAt:(id)a1;
+ (id)_generateTriggerForAttribute:(id)a0 newToken:(id)a1 triggerColumnListComponent:(id)a2 triggerColumnWhereComponent:(id)a3;
+ (id)_generateSQLForToOneDerivationForDerivedAttribute:(id)a0 toOneKeypath:(id)a1;
+ (id)_computeNewColumnTokenForFunctionAttribute:(id)a0;
+ (id)generateSQLForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateIncrementDecrementTriggersForDerivedAttribute:(id)a0 toManyKeypath:(id)a1;
+ (id)_generateMinMaxTriggersForDerivedAttribute:(id)a0 toManyKeypath:(id)a1;
+ (id)_generateIncrementDecrementTriggersForDerivedAttribute:(id)a0 manyToManyKeypath:(id)a1;
+ (id)_generateSQLForAttributeKeypathDerivationForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateSQLForToOneKeypathDerivationForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateSQLForAttributeFunctionDerivationForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateSQLForToManyFunctionDerivationForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateSQLForManyToManyFunctionDerivationForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateSQLForToOneFunctionDerivationForDerivedAttribute:(id)a0 keypaths:(id)a1;
+ (id)_generateSQLForDerivedAttributeWithOneParameterKeypath:(id)a0 keypaths:(id)a1;

@end
