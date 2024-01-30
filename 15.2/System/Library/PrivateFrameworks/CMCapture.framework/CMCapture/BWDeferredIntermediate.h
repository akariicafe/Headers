@class NSString, NSURL;

@interface BWDeferredIntermediate : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _cv;
    BOOL _prefetching;
    BOOL _dirty;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) NSURL *URL;

+ (void)initialize;

- (int)flush;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)archive:(int *)a0;
- (void)dealloc;
- (int)setURL:(id)a0 prefetchQueue:(id)a1;
- (id)fetchAndRetain:(int *)a0;
- (id)initWithTag:(id)a0 URL:(id)a1;

@end
