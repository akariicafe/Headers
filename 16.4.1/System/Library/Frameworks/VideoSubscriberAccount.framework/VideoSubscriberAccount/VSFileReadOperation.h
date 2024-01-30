@class NSURL, VSOptional;

@interface VSFileReadOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (copy, nonatomic) NSURL *source;

- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;

@end
