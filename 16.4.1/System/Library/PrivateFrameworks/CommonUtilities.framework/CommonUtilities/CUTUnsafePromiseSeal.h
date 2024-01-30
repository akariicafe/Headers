@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise;

- (void)failWithError:(id)a0;
- (id)init;
- (void)fulfillWithValue:(id)a0;
- (void).cxx_destruct;

@end
