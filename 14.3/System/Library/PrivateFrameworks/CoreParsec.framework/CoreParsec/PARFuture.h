@class FutureValue;

@interface PARFuture : NSObject {
    FutureValue *_futureValue;
}

- (void).cxx_destruct;
- (id)wait:(unsigned long long)a0;
- (id)waitForever;
- (id)initFromPromise:(id)a0;
- (id)initFulfilled:(id)a0;
- (id)then:(id /* block */)a0 queue:(id)a1;

@end
