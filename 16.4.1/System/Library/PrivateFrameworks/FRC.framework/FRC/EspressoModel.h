@class NSObject;
@protocol OS_dispatch_queue;

@interface EspressoModel : NSObject {
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    int _engine;
}

@property (nonatomic) long long usage;

- (void)dealloc;
- (void).cxx_destruct;
- (int)loadModel:(id)a0 from:(id)a1;
- (BOOL)buildModelWithConfiguration:(const char *)a0;
- (void)freeContext;
- (BOOL)initContextWithFile:(id)a0 engine:(int)a1 configuration:(const char *)a2 usePreCompiled:(BOOL)a3;
- (id)initMPSWithModelName:(id)a0 usage:(long long)a1;
- (id)initWithModelName:(id)a0 configuration:(const char *)a1;
- (id)initWithModelName:(id)a0 usage:(long long)a1;
- (BOOL)switchUsage:(long long)a0;

@end
