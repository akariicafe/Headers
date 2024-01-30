@class NSMutableArray;

@interface IKCSSRuleList : NSObject {
    NSMutableArray *rules;
}

- (id)init;
- (void).cxx_destruct;
- (void)addRule:(id)a0;
- (id)description;
- (unsigned long long)count;
- (id)ruleAtIndex:(unsigned long long)a0;
- (id)firstRule;
- (id)lastRule;

@end
