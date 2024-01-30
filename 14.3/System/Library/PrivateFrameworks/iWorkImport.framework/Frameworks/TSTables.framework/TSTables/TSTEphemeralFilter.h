@class NSArray;

@interface TSTEphemeralFilter : NSObject {
    NSArray *_rules;
}

@property (readonly, nonatomic) unsigned long long filterIndex;
@property (readonly, nonatomic) struct TSUModelColumnIndex { unsigned short _column; } baseColumnIndex;
@property (readonly, nonatomic) unsigned long long ruleCount;

+ (id)filterWithIndex:(unsigned long long)a0 baseColumnIndex:(struct TSUModelColumnIndex { unsigned short x0; })a1 rules:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)ruleAtIndex:(unsigned long long)a0;
- (id)initWithIndex:(unsigned long long)a0 baseColumnIndex:(struct TSUModelColumnIndex { unsigned short x0; })a1 rules:(id)a2;
- (id)filterWithRule:(id)a0 atIndex:(unsigned long long)a1;
- (id)filterByAddingRule:(id)a0;
- (id)filterByRemovingRuleAtIndex:(unsigned long long)a0;
- (id)filterByClearingRules;
- (void)enumerateRulesUsingBlock:(id /* block */)a0;

@end
