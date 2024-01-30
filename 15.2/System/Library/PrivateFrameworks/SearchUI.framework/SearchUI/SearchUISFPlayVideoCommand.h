@class SFPlayVideoCommand;

@interface SearchUISFPlayVideoCommand : SearchUITapCommand

@property (readonly, nonatomic) SFPlayVideoCommand *command;

- (id)setupViewController;
- (BOOL)prefersModalPresentation;

@end
