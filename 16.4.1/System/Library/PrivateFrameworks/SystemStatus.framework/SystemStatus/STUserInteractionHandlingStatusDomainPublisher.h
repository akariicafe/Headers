@interface STUserInteractionHandlingStatusDomainPublisher : STStatusDomainPublisher {
    id /* block */ _userInteractionHandlerBlock;
}

- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)handleUserInteractionsWithBlock:(id /* block */)a0;

@end
