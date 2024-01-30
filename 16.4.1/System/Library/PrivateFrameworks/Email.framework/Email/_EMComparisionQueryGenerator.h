@class NSString;

@interface _EMComparisionQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_attributesForPredicate:(id)a0 propertyMapper:(id)a1;
- (id)_comparisonOperatorForPredicate:(id)a0;
- (unsigned long long)_modifiersForPredicate:(id)a0;
- (id)_patternMatchStringForPredicate:(id)a0;
- (id)queryExpressionFromPredicate:(id)a0 propertyMapper:(id)a1 languages:(id)a2;

@end
