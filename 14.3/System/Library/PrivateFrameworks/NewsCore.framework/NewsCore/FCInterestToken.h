@interface FCInterestToken : NSObject

@property (copy, nonatomic) id /* block */ removeInterestBlock;

+ (id)interestTokenWithRemoveInterestBlock:(id /* block */)a0;
+ (id)interestTokenWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;

- (id)initWithCallbackQueue:(id)a0 removeInterestBlock:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
