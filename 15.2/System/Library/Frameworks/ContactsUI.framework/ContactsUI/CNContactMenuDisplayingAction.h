@interface CNContactMenuDisplayingAction : CNContactAction

@property (readonly, nonatomic) id /* block */ menuProvider;

+ (id)contactActionWithTitle:(id)a0 menuProvider:(id /* block */)a1 destructive:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 menuProvider:(id /* block */)a1 destructive:(BOOL)a2;

@end
