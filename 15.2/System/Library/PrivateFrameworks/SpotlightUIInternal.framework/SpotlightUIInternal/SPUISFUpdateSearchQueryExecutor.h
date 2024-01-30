@class NSString;

@interface SPUISFUpdateSearchQueryExecutor : SPUICommandExecutor <SearchUICommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performCommand:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)canPerformCommand;

@end
