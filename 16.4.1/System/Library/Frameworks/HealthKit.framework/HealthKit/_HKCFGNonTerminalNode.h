@class _HKCFGReplacementRule, NSArray;

@interface _HKCFGNonTerminalNode : _HKCFGNode {
    NSArray *_nodes;
    id _value;
}

@property (readonly, nonatomic) _HKCFGReplacementRule *rule;

+ (id)nodeWithChildren:(id)a0 rule:(id)a1 rangeOfString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (id)evaluate;
- (void).cxx_destruct;

@end
