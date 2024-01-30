@class NSString;

@interface NSCondition : NSObject <NSLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } c;
    NSString *n;
}

@property (copy) NSString *name;

- (void)lock;
- (BOOL)waitUntilDate:(id)a0;
- (void)unlock;
- (void)wait;
- (void)dealloc;
- (void)broadcast;
- (void)signal;
- (id)init;
- (id)description;

@end
