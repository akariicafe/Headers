@interface _NSRefcountedPthreadMutex : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

- (void)dealloc;
- (id)init;

@end
