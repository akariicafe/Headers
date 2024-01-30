@class STKUSSDSessionData;

@interface STKUSSDSessionAction : STKSessionAction

@property (readonly, nonatomic) STKUSSDSessionData *sessionData;

- (id)initWithInputData:(id)a0 response:(id /* block */)a1;
- (void)sendSuccessWithResponse:(id)a0;

@end
