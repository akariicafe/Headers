@class SSURLBag;

@interface VSStoreURLBag : NSObject

@property (retain, nonatomic) SSURLBag *bag;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (void)loadValueForKey:(id)a0 completionBlock:(id /* block */)a1;

@end
