@class INStringLocalizer;
@protocol WFActionProviderDelegate;

@interface WFActionProvider : NSObject

@property (weak, nonatomic) id<WFActionProviderDelegate> delegate;
@property (retain, nonatomic) INStringLocalizer *stringLocalizer;

- (void).cxx_destruct;
- (void)deleteCache;
- (void)updateCache:(id /* block */)a0;
- (void)createActionsForRequests:(id)a0;
- (id)availableActionIdentifiers;
- (id)createAllAvailableActions;

@end
