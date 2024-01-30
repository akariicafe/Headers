@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSURL *source;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
