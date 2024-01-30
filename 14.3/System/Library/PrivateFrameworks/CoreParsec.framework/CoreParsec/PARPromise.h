@class FutureValue;

@interface PARPromise : NSObject {
    FutureValue *_futureValue;
    _Atomic BOOL _fulfilled;
}

- (id)future;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fulfill:(id)a0;
- (id)futureValue;

@end
