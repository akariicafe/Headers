@protocol SearchUICommandProtocol;

@interface SearchUICustomTapCommand : SearchUITapCommand

@property (retain, nonatomic) id<SearchUICommandProtocol> handlerObject;

- (void).cxx_destruct;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (BOOL)shouldDeselectPreviousSelection;
- (BOOL)presentsViewController;
- (id)commandHandlerObject;
- (void)callCompletionHandlerIfNeeded:(id /* block */)a0;
- (void)callPerformCommandHandlerWithCompletion:(id /* block */)a0;

@end
