@class NSString;

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {
    struct map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree<std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } *mMap;
}

@property (nonatomic) double horizontalScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (void)removeHeaderForKey:(unsigned int)a0;
- (void)setHeader:(id)a0 forKey:(unsigned int)a1;
- (long long)count;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (id)headerForKey:(unsigned int)a0 willModify:(BOOL)a1 createIfNotThere:(BOOL)a2;
- (void)shiftKeysAtIndex:(unsigned int)a0 amount:(int)a1;
- (void)applyFunction:(void /* function */ *)a0 withState:(void *)a1 willModify:(BOOL)a2;
- (id)headerForKey:(unsigned int)a0 willModify:(BOOL)a1;
- (void)removeAllHeaders;
- (void)makeHeadersPerformSelector:(SEL)a0 willModify:(BOOL)a1;
- (unsigned int)upperBound:(unsigned int)a0;
- (unsigned int)lowerBound:(unsigned int)a0;

@end
