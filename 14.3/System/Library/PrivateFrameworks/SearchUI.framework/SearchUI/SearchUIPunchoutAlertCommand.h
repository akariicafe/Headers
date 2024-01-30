@interface SearchUIPunchoutAlertCommand : SearchUITapCommand

+ (id)pickerPunchoutsForRowModel:(id)a0;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (BOOL)prefersModalPresentation;
- (id)setupViewController;

@end
