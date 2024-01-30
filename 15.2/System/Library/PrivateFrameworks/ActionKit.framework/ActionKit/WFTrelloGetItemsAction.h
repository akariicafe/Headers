@interface WFTrelloGetItemsAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (void)updateBoards:(id)a0 onAccount:(id)a1;
- (void)updateListCache:(id)a0 board:(id)a1 account:(id)a2;

@end
