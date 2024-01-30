@class NSOperationQueue, VSOptional;

@interface VSStorefrontCodeLoadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;

@end
