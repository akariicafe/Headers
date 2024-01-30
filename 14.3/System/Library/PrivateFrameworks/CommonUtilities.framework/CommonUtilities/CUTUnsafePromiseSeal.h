@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise;

- (id)init;
- (void).cxx_destruct;
- (void)fulfillWithValue:(id)a0;
- (void)failWithError:(id)a0;

@end
