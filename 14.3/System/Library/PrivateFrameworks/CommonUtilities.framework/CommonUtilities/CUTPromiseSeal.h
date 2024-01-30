@class CUTPromise;

@interface CUTPromiseSeal : NSObject

@property (retain, nonatomic) CUTPromise *promise;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)fulfillWithValue:(id)a0;
- (void)failWithError:(id)a0;

@end
