@class NSError, NSMutableArray, NFUnfairLock;

@interface NFPromiseSeal : NSObject

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (readonly, nonatomic) NFUnfairLock *lock;

- (id)initWithError:(id)a0;
- (void)registerHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)resolve:(id)a0;
- (void)alwaysOn:(id)a0 always:(id /* block */)a1;
- (void)resolveOn:(id)a0 reject:(id /* block */)a1 resolve:(id /* block */)a2;
- (id)initWithValue:(id)a0;
- (void)seal:(id)a0 error:(id)a1 resolution:(unsigned long long)a2;
- (void)dealloc;
- (void)reject:(id)a0;

@end
