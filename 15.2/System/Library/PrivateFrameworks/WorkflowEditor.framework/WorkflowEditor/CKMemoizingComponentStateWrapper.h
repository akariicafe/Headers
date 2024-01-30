@interface CKMemoizingComponentStateWrapper : NSObject {
    id _memoizationState;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)executeBlockWithMemoizationState:(id /* block */)a0;

@end
