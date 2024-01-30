@class SFBeginMapsRoutingCommand;

@interface SearchUISFBeginMapsRoutingCommand : SearchUITapCommand

@property (readonly, nonatomic) SFBeginMapsRoutingCommand *command;

- (void)performCommandWithCompletion:(id /* block */)a0;

@end
