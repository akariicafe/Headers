@interface SearchUICustomCardPresentationCommand : SearchUITapCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (void)performCommandWithCompletion:(id /* block */)a0;

@end
