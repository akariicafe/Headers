@class NSDictionary;

@interface COMutableStateClientInfo : COStateClientInfo

@property (copy, nonatomic) NSDictionary *observers;
@property (copy, nonatomic) NSDictionary *state;

- (id)state;
- (id)observers;
- (void)removeObserverWithPredicate:(id)a0;
- (void)setObservers:(id)a0;
- (void)setState:(id)a0;
- (void)addObserverWithPredicate:(id)a0;
- (id)initWithSuite:(id)a0 clusters:(id)a1 state:(id)a2 observers:(id)a3;
- (void)removeKeyPath:(id)a0 cluster:(id)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1 cluster:(id)a2;

@end
