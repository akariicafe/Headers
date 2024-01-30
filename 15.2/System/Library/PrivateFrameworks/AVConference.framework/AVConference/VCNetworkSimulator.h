@class NSDictionary, VCEmulatedNetwork;

@interface VCNetworkSimulator : NSObject {
    NSDictionary *_policies;
    BOOL _isStarted;
    struct tagVCRealTimeThread { unsigned int x0; unsigned int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; id x3; void /* function */ *x4; void *x5; struct OpaqueFigThread *x6; int x7; char x8[60]; unsigned int x9; unsigned int x10; } *_thread;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _condition;
}

@property (readonly, nonatomic) VCEmulatedNetwork *network;

+ (id)sharedInstance;

- (void)start;
- (id)init;
- (void)dealloc;
- (void)stop;
- (id)createDefaultPolicies;
- (id)loadPoliciesFromJsonFile;
- (void)setupNetwork;
- (int)processNetwork;

@end
