@class STKListItemsSessionData;

@interface STKListItemsSessionAction : STKTextSessionAction

@property (readonly, nonatomic) STKListItemsSessionData *sessionData;

- (id)initWithBehavior:(id)a0 inputData:(id)a1 response:(id /* block */)a2;
- (void)sendSuccessWithSelectedItemIndex:(unsigned long long)a0;

@end
