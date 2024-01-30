@class CNPropertyAction;

@interface CNQuickPropertyAction : CNQuickContactAction

@property (readonly, nonatomic) CNPropertyAction *propertyAction;

- (id)identifier;
- (BOOL)enabled;
- (unsigned long long)score;
- (id)_coreDuetValue;
- (id)titleForContext:(long long)a0;
- (id)subtitleForContext:(long long)a0;
- (void)performWithCompletionBlock:(id /* block */)a0;
- (id)initWithPropertyAction:(id)a0;
- (id)propertyItem;

@end
