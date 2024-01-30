@class SFShareCommand;

@interface SearchUIShareCommand : SearchUITapCommand

@property (retain) SFShareCommand *command;

+ (void)presentShareViewController:(id)a0 withEnvironment:(id)a1;

- (void)performCommandWithCompletion:(id /* block */)a0;

@end
