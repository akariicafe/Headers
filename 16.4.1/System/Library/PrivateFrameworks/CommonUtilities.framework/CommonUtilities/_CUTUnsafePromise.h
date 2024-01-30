@class NSMutableArray, CUTResult;

@interface _CUTUnsafePromise : CUTUnsafePromise

@property (nonatomic) BOOL done;
@property (retain, nonatomic) CUTResult *result;
@property (retain, nonatomic) NSMutableArray *resultBlocks;

- (id)initWithResult:(id)a0;
- (void)_fulfillWithResult:(id)a0;
- (void)registerResultBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
