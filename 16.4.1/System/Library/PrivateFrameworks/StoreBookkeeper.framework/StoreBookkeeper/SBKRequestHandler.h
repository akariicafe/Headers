@class SBKStoreURLBagContext;

@interface SBKRequestHandler : NSObject

@property (readonly, nonatomic) SBKStoreURLBagContext *bagContext;

- (void)timeout;
- (id)initWithBagContext:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
