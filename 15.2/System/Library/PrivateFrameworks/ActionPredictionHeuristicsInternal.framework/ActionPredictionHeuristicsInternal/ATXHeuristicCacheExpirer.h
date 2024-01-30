@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {
    NSMutableSet *_expirationEntries;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)_start;
- (void)encodeWithCoder:(id)a0;
- (void)_stop;
- (void)startExpiring:(id)a0 cache:(id)a1;
- (void)expire;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)stopExpiring:(id)a0 cache:(id)a1;

@end
