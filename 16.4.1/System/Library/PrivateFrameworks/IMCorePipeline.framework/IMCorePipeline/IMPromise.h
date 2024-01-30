@class IMResult, NSMutableArray;

@interface IMPromise : NSObject {
    IMResult *_result;
    NSMutableArray *_completionBlocks;
}

+ (id)all:(id)a0;

- (id)then:(id /* block */)a0;
- (BOOL)completed;
- (id)initWithValue:(id)a0;
- (void)failWithError:(id)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (void)fullfillWithValue:(id)a0;
- (void)registerCompletionBlock:(id /* block */)a0;

@end
