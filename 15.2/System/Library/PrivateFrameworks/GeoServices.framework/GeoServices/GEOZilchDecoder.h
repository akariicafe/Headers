@class NSObject;
@protocol OS_dispatch_queue, GEOMapAccessRestrictions;

@interface GEOZilchDecoder : GEOMapRequestManager {
    NSObject<OS_dispatch_queue> *_requestQueue;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *decoderQueue;
@property (weak, nonatomic) id<GEOMapAccessRestrictions> mapAccessRestrictions;

+ (BOOL)decodingSupported;

- (void)setRequestQueue:(id)a0;
- (void)trackRequest:(id)a0;
- (void)requestComplete:(id)a0;
- (id)requestQueue;
- (void).cxx_destruct;
- (id)init;
- (id)decodeZilchMessage:(struct shared_ptr<zilch::Message> { struct Message *x0; struct __shared_weak_count *x1; })a0 pathHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id).cxx_construct;

@end
