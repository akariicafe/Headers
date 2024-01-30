@class NFPromiseSeal;

@interface NFPromise : NSObject

@property (retain, nonatomic) NFPromiseSeal *seal;
@property (readonly) id /* block */ then;
@property (readonly) id /* block */ thenOn;
@property (readonly) id /* block */ pipe;
@property (readonly) id /* block */ pipeOn;
@property (readonly) id /* block */ error;
@property (readonly) id /* block */ errorOn;
@property (readonly) id /* block */ resolve;
@property (readonly) id /* block */ resolveOn;
@property (readonly) id /* block */ delay;
@property (readonly) id /* block */ delayOn;

+ (id)asVoid;
+ (id)new;
+ (id)firstly:(id /* block */)a0;
+ (id)asVoid:(id)a0;
+ (id)asDelay:(double)a0 withValue:(id)a1;
+ (id)asDelay:(double)a0 onQueue:(id)a1 withValue:(id)a2;
+ (id)asDelay:(double)a0 onQueue:(id)a1 withError:(id)a2;
+ (id)asDelay:(double)a0 withError:(id)a1;

- (id)always:(id /* block */)a0;
- (id)then:(id /* block */)a0;
- (id)initWithError:(id)a0;
- (id)initWithResolver:(id /* block */)a0;
- (id)errorOn:(id)a0 error:(id /* block */)a1;
- (id)thenOn:(id)a0 then:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)alwaysOn:(id)a0 always:(id /* block */)a1;
- (id)initWithValue:(id)a0;
- (id)error:(id /* block */)a0;
- (void)dealloc;

@end
