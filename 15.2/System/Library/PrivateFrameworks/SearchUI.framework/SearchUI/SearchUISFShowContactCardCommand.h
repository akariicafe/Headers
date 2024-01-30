@class SFShowContactCardCommand;

@interface SearchUISFShowContactCardCommand : SearchUITapCommand

@property (readonly) SFShowContactCardCommand *command;

+ (id)commandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)setupViewController;
- (id)viewControllerForIdentifier:(id)a0 isSuggestedContact:(BOOL)a1;

@end
