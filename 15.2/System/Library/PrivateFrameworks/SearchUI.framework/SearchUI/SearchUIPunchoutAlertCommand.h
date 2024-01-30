@interface SearchUIPunchoutAlertCommand : SearchUITapCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;
+ (id)pickerPunchoutsForRowModel:(id)a0;

- (unsigned long long)destination;
- (id)setupViewController;
- (BOOL)prefersModalPresentation;

@end
