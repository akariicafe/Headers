@class NSObject;
@protocol OS_dispatch_queue;

@interface MTRCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (struct Span<const unsigned char> { char *x0; unsigned long long x1; })asByteSpan:(id)a0;
- (struct Span<const char> { char *x0; unsigned long long x1; })asCharSpan:(id)a0;

@end
