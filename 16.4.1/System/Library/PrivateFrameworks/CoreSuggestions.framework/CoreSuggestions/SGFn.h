@interface SGFn : NSObject

+ (id)mapAndFilter:(id)a0 f:(id /* block */)a1;
+ (id)filter:(id)a0 f:(id /* block */)a1;
+ (id)map:(id)a0 f:(id /* block */)a1;
+ (id)parMapOnQueue:(id)a0 concurrencyLimit:(unsigned long long)a1 input:(id)a2 f:(id /* block */)a3;
+ (id)simpleDedupe:(id)a0;

@end
