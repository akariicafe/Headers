@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise;

- (void).cxx_destruct;
- (id)init;
- (void)failWithError:(id)a0;
- (void)fulfillWithValue:(id)a0;

@end
