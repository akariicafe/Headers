@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject

@property (weak, nonatomic) id<WFActionProviderDelegate> delegate;

- (void).cxx_destruct;
- (void)updateCache:(id /* block */)a0;
- (id)availableActionIdentifiers;
- (void)createActionsForRequests:(id)a0;
- (void)deleteCache;
- (id)createAllAvailableActions;

@end
