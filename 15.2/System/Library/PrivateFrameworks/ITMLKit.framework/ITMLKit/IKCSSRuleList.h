@class NSMutableArray;

@interface IKCSSRuleList : NSObject {
    NSMutableArray *rules;
}

- (id)description;
- (void)addRule:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)ruleAtIndex:(unsigned long long)a0;
- (id)firstRule;
- (id)lastRule;

@end
