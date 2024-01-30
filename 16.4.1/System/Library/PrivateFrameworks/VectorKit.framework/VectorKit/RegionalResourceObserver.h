@interface RegionalResourceObserver : NSObject {
    void *_resourceProvider;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _resourceProviderLock;
    id _observer;
}

- (void)clearProvider;
- (id).cxx_construct;
- (id)initWithResourceProvider:(void *)a0;
- (void).cxx_destruct;

@end
