@interface SearchUIShowStoreSheetHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)createViewControllerForCommand:(id)a0 environment:(id)a1;
- (BOOL)prefersModalPresentation;

@end
