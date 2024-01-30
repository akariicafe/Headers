@interface SearchUIPunchoutCommand : SearchUITapCommand

+ (BOOL)supportsRowModel:(id)a0 environment:(id)a1;

- (BOOL)shouldDeselectPreviousSelection;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (id)resultEngagementFeedback;

@end
