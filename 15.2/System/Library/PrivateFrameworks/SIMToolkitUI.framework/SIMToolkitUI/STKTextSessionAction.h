@class STKTextSessionData;

@interface STKTextSessionAction : STKSessionAction

@property (readonly, nonatomic) STKTextSessionData *sessionData;

- (id)initWithBehavior:(id)a0 inputData:(id)a1 response:(id /* block */)a2;

@end
