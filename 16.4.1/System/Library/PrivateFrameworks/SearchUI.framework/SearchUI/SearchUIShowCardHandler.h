@interface SearchUIShowCardHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (void)prepareViewController:(id)a0 forTriggerEvent:(unsigned long long)a1;

@end
