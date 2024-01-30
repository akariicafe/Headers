@class NFUnfairLock;

@interface NFLazy : NSObject

@property (readonly, copy, nonatomic) id /* block */ constructor;
@property (readonly, copy, nonatomic) NFUnfairLock *lock;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithConstructor:(id /* block */)a0;
- (void)reset;

@end
