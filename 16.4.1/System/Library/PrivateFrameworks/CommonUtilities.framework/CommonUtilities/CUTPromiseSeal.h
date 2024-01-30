@class CUTPromise;

@interface CUTPromiseSeal : NSObject

@property (retain, nonatomic) CUTPromise *promise;

- (void)failWithError:(id)a0;
- (void)fulfillWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
