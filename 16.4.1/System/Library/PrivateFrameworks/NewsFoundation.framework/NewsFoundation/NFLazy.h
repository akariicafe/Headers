@class NFUnfairLock;

@interface NFLazy : NSObject

@property (readonly, copy, nonatomic) id /* block */ constructor;
@property (readonly, copy, nonatomic) NFUnfairLock *lock;
@property (readonly, nonatomic) id value;

- (id)initWithConstructor:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reset;

@end
