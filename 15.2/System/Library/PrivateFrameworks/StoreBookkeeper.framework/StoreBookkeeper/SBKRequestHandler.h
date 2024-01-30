@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject

@property (readonly, nonatomic) SBKStoreURLBagContext *bagContext;

- (void)timeout;
- (void).cxx_destruct;
- (id)initWithBagContext:(id)a0;
- (void)cancel;

@end
