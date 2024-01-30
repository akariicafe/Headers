@class STKTextInputSessionData;

@interface STKTextInputSessionAction : STKSessionAction

@property (readonly, nonatomic) STKTextInputSessionData *sessionData;

- (id)initWithBehavior:(id)a0 inputData:(id)a1 response:(id /* block */)a2;
- (void)sendSuccessWithResponse:(id)a0;

@end
