@interface STUserInteractionHandlingStatusDomainPublisher : STStatusDomainPublisher

@property (copy, nonatomic) id /* block */ userInteractionHandlerBlock;

- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)handleUserInteractionsWithBlock:(id /* block */)a0;

@end
