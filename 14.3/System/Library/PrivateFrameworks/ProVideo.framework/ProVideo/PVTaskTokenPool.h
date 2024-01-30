@protocol PVTaskTokenPoolDelegate;

@interface PVTaskTokenPool : NSObject {
    unsigned long long _tokenCounter;
    struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long> > > { struct deque<unsigned long, std::__1::allocator<unsigned long> > { struct __split_buffer<unsigned long *, std::__1::allocator<unsigned long *> > { unsigned long long **__first_; unsigned long long **__begin_; unsigned long long **__end_; struct __compressed_pair<unsigned long **, std::__1::allocator<unsigned long *> > { unsigned long long **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long __value_; } __size_; } c; } _tokenData;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _tokenLock;
}

@property (weak, nonatomic) id<PVTaskTokenPoolDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)returnToken:(id)a0;
- (id)initWithOffset:(unsigned long long)a0;
- (id)getToken;

@end
