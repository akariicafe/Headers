@interface NFWaiter : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) double timeout;

+ (id)error;
+ (void)waitFor:(id /* block */)a0 waitInterval:(double)a1 timeoutInterval:(double)a2 completion:(id /* block */)a3 failure:(id /* block */)a4;
+ (void)waitUntil:(id /* block */)a0 waitInterval:(double)a1 timeoutInterval:(double)a2 completion:(id /* block */)a3 failure:(id /* block */)a4;
+ (id)waitWithInterval:(double)a0 timeout:(double)a1 valueProvider:(id /* block */)a2;
+ (id)waitWithInterval:(double)a0 timeout:(double)a1 conditionProvider:(id /* block */)a2;
+ (id)waitWithInterval:(double)a0 timeout:(double)a1 valueProvider:(id /* block */)a2 condition:(id /* block */)a3;
+ (id)waitWithTimeout:(double)a0 valueProvider:(id /* block */)a1;
+ (id)waitWithTimeout:(double)a0 conditionProvider:(id /* block */)a1;

@end
