@class NSHashTable, CKComponentScopeFrame;
@protocol CKComponentStateListener;

@interface CKComponentScopeRoot : NSObject {
    struct unordered_multimap<CKComponentAnnouncedEvent, CKComponentController *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const CKComponentAnnouncedEvent, CKComponentController *> > > { struct __hash_table<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__1::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<CKComponentAnnouncedEvent, std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<CKComponentAnnouncedEvent, std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__1::hash<unsigned long>, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<CKComponentAnnouncedEvent, std::__1::__hash_value_type<CKComponentAnnouncedEvent, CKComponentController *>, std::__1::equal_to<unsigned long>, true> > { float __value_; } __p3_; } __table_; } _eventRegistration;
    NSHashTable *_boundsAnimationComponents;
}

@property (readonly, weak, nonatomic) id<CKComponentStateListener> listener;
@property (readonly, nonatomic) int globalIdentifier;
@property (readonly, nonatomic) CKComponentScopeFrame *rootFrame;

+ (id)rootWithListener:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)registerAnnounceableEventsForController:(id)a0;
- (void)registerBoundsAnimationComponent:(id)a0;
- (id)newRoot;
- (id)initWithListener:(id)a0 globalIdentifier:(int)a1;
- (void)announceEventToControllers:(unsigned long long)a0;
- (id)boundsAnimationComponents;
- (struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; })boundsAnimationFromPreviousScopeRoot:(id)a0;

@end
