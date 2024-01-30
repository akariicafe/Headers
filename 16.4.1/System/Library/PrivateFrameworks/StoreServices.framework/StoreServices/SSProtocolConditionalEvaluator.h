@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {
    SSProtocolConditionalContext *_context;
    NSDictionary *_dictionary;
}

+ (id)defaultConditionalContext;
+ (void)setDefaultConditionalContext:(id)a0;

- (id)_dictionaryByEvaluatingWithForcedValue:(long long)a0;
- (int)_logicalOperatorForString:(id)a0;
- (id)dictionaryByEvaluatingConditions;
- (id)_dictionaryByEvaluatingChildrenOfDictionary:(id)a0 withForcedValue:(long long)a1;
- (id)dictionaryByRemovingConditions;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)_arrayByEvaluatingChildrenOfArray:(id)a0 withForcedValue:(long long)a1;
- (BOOL)_checkConditions:(id)a0 withOperator:(id)a1;
- (id)init;
- (id)initWithDictionary:(id)a0 conditionalContext:(id)a1;
- (id)_dictionaryByEvaluatingDictionary:(id)a0 withForcedValue:(long long)a1;

@end
