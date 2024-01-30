@class SFToggleWatchListStatusCommand, SearchUIWatchListState;

@interface SearchUISFToggleWatchListStatusCommand : SearchUITapCommand

@property (readonly, nonatomic) SFToggleWatchListStatusCommand *command;
@property (retain) SearchUIWatchListState *watchListState;

- (void).cxx_destruct;
- (void)performCommandWithCompletion:(id /* block */)a0;

@end
