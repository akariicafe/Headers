@class SFShowSFCardCommand;

@interface SearchUISFShowCardCommand : SearchUITapCommand

@property (readonly) SFShowSFCardCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;
+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)setupViewController;

@end
