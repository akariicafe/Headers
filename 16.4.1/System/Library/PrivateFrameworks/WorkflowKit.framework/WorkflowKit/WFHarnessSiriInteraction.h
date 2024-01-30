@class WFHarnessActionSelector;

@interface WFHarnessSiriInteraction : NSObject

@property (readonly, nonatomic) WFHarnessActionSelector *selector;
@property (readonly, nonatomic) Class siriActionRequestClass;
@property (readonly, nonatomic) id /* block */ interaction;

- (void).cxx_destruct;
- (id)initWithSelector:(id)a0 siriActionRequestClass:(Class)a1 interaction:(id /* block */)a2;

@end
