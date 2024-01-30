@class SFOpenFileProviderItemCommand;

@interface SearchUISFOpenFileProviderCommand : SearchUITapCommand

@property (readonly) SFOpenFileProviderItemCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (id)coreSpotlightIdentifier;
- (unsigned long long)destination;
- (id)fileProviderIdentifier;
- (void)performCommandWithCompletion:(id /* block */)a0;

@end
