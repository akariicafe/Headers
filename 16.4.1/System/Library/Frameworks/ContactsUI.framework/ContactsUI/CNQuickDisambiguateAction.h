@class NSOrderedSet, CNQuickAction;

@interface CNQuickDisambiguateAction : CNQuickPropertyAction

@property (retain, nonatomic) NSOrderedSet *actions;
@property (weak, nonatomic) CNQuickAction *mainAction;
@property (nonatomic) BOOL ignoreMainAction;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActions:(id)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)subtitleForContext:(long long)a0;
- (id)titleForContext:(long long)a0;

@end
