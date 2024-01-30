@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction

@property (retain, nonatomic) NSOrderedSet *actions;
@property (weak, nonatomic) CNQuickAction *mainAction;
@property (nonatomic) BOOL ignoreMainAction;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)titleForContext:(long long)a0;
- (id)subtitleForContext:(long long)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)initWithActions:(id)a0;

@end
