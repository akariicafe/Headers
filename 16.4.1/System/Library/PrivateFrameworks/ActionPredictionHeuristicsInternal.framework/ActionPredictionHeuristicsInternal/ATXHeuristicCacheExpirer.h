@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {
    NSMutableSet *_expirationEntries;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)expire;
- (void)_start;
- (void)_stop;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)stopExpiring:(id)a0 cache:(id)a1;
- (void)dealloc;
- (void)startExpiring:(id)a0 cache:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
