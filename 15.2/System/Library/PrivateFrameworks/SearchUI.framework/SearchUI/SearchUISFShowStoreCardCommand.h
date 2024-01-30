@class SFShowAppStoreSheetCommand;

@interface SearchUISFShowStoreCardCommand : SearchUITapCommand

@property (readonly) SFShowAppStoreSheetCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)setupViewController;
- (BOOL)prefersModalPresentation;

@end
