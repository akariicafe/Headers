@interface SearchUIToggleWatchListStatusHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)shouldDeselectAfterExecution;

@end
