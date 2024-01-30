@class CKComponent, CKComponentController;
@protocol CKComponentStateListener;

@interface CKComponentScopeHandle : NSObject {
    id<CKComponentStateListener> _listener;
    CKComponentController *_controller;
    int _rootIdentifier;
    BOOL _acquired;
    BOOL _resolved;
    CKComponent *_acquiredComponent;
}

@property (readonly, nonatomic) CKComponentController *controller;
@property (readonly, nonatomic) Class componentClass;
@property (readonly, nonatomic) id state;
@property (readonly, nonatomic) int globalIdentifier;

+ (id)handleForComponent:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)responder;
- (void)resolve;
- (void)updateState:(id /* block */)a0 mode:(unsigned long long)a1;
- (id)initWithListener:(id)a0 rootIdentifier:(int)a1 componentClass:(Class)a2 initialStateCreator:(id /* block */)a3;
- (id)newHandleWithStateUpdates:(const struct unordered_multimap<int, id (^)(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id (^)(id)> > > { struct __hash_table<std::__1::__hash_value_type<int, id (^)(id)>, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::equal_to<int>, true>, std::__1::allocator<std::__1::__hash_value_type<int, id (^)(id)> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<int, id (^)(id)>, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::hash<int>, true> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::__unordered_map_equal<int, std::__1::__hash_value_type<int, id (^)(id)>, std::__1::equal_to<int>, true> > { float x0; } x3; } x0; } *)a0 componentScopeRoot:(id)a1;
- (id)newHandleToBeReacquiredDueToScopeCollision;
- (id)initWithListener:(id)a0 globalIdentifier:(int)a1 rootIdentifier:(int)a2 componentClass:(Class)a3 state:(id)a4 controller:(id)a5;
- (BOOL)acquireFromComponent:(id)a0;

@end
