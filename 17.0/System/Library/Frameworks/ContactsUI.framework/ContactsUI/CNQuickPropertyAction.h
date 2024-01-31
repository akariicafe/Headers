@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (readonly, nonatomic) CNPropertyAction *propertyAction;

- (unsigned long long)score;
- (BOOL)enabled;
- (id)identifier;
- (id)_coreDuetValue;
- (id)initWithPropertyAction:(id)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)propertyItem;
- (id)subtitleForContext:(long long)a0;
- (id)titleForContext:(long long)a0;

@end
