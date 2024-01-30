@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction

@property (retain, nonatomic) NSOrderedSet *actions;
@property (weak, nonatomic) CNQuickAction *mainAction;
@property (nonatomic) BOOL ignoreMainAction;

- (id)description;
- (id)initWithActions:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)titleForContext:(long long)a0;
- (id)subtitleForContext:(long long)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;

@end
