@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NUGLObjectPool : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > { struct __tree<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _objects;
    NSHashTable *_contexts;
}

@property (readonly) BOOL isUsed;
@property (readonly) long long objectCount;

- (long long)useCount;
- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)_useCount;
- (id)description;
- (id).cxx_construct;
- (void)shareWithContext:(id)a0;
- (void)_shareWithContext:(id)a0;
- (BOOL)isUsedByContext:(id)a0;
- (BOOL)_isUsedByContext:(id)a0;
- (void)pushObject:(unsigned int)a0 ofType:(unsigned int)a1;
- (unsigned int)popObjectOfType:(unsigned int)a0;
- (void)_pushObject:(unsigned int)a0 ofType:(unsigned int)a1;
- (unsigned int)_popObjectOfType:(unsigned int)a0;
- (long long)_objectCount;

@end
