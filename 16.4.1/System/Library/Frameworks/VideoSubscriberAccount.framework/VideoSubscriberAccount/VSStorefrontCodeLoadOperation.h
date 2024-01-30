@class NSOperationQueue, VSOptional;

@interface VSStorefrontCodeLoadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;

@end
