@class CNFuture;

@interface _CNUIUserActionURLItem : CNUIUserActionItem

@property (readonly, nonatomic) CNFuture *url;
@property (readonly, nonatomic) BOOL isSensitive;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)performActionWithContext:(id)a0;
- (id)performActionWithContext:(id)a0 shouldCurateIfPerformed:(BOOL)a1;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 url:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 url:(id)a3 isSensitive:(BOOL)a4 group:(long long)a5 options:(unsigned long long)a6;

@end
