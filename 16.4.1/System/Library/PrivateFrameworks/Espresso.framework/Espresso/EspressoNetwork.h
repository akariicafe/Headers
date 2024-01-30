@class EspressoContext;

@interface EspressoNetwork : NSObject

@property (readonly) struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } net;
@property (readonly) unsigned long long layers_size;
@property (readonly) EspressoContext *ctx;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithJSFile:(const char *)a0 binSerializerId:(const char *)a1 context:(id)a2 computePath:(int)a3;
- (id)initWithJSFile:(const char *)a0 context:(id)a1 computePath:(int)a2;
- (void)wipe_layers_blobs;

@end
