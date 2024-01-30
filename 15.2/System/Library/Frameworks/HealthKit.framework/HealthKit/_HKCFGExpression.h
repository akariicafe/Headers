@interface _HKCFGExpression : NSObject

@property (nonatomic) BOOL isPrivate;

- (unsigned long long)_minimumLength;
- (id)_label;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;

@end
