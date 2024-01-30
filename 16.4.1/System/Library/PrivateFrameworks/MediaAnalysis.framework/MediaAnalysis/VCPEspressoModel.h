@class NSObject;
@protocol OS_dispatch_queue;

@interface VCPEspressoModel : NSObject {
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _net;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (int)loadModel:(id)a0;
- (BOOL)buildModelWithConfig:(id)a0 error:(id *)a1;
- (void)freeModel;
- (id)initModelWithName:(id)a0 andConfig:(id)a1;
- (BOOL)prepareModelWithFile:(id)a0 engine:(int)a1 config:(id)a2 error:(id *)a3;
- (BOOL)updateModelWithConfig:(id)a0 error:(id *)a1;

@end
