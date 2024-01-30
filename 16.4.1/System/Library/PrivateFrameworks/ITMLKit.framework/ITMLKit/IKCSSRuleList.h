@class NSMutableArray;

@interface IKCSSRuleList : NSObject {
    NSMutableArray *rules;
}

- (unsigned long long)count;
- (void)addRule:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)firstRule;
- (id)lastRule;
- (id)ruleAtIndex:(unsigned long long)a0;

@end
