@class SFCopyCommand;

@interface SearchUICopyCommand : SearchUITapCommand

@property (retain) SFCopyCommand *command;

- (void)performCommandWithCompletion:(id /* block */)a0;

@end
