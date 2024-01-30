@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSURL *source;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;

@end
