@interface TSWPFontMetricsCache : NSObject {
    struct list<unsigned long, std::allocator<unsigned long>> { struct __list_node_base<unsigned long, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> { unsigned long long __value_; } __size_alloc_; } _fontHashList;
    struct map<unsigned long, TSWPFontMetricsCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontMetricsCacheEntry>>> { struct __tree<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontMetricsCacheEntry>, std::less<unsigned long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedCache;
+ (id)_singletonAlloc;

- (void)noop;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (struct TSWPFontHeightInfo { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })fontHeightInfoForFont:(struct __CTFont { } *)a0;
- (void)validateFontHeightInfo:(const struct TSWPFontHeightInfo { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; } *)a0 description:(id)a1;
- (unsigned long long)supportedFractionalWidthsForFont:(struct __CTFont { } *)a0;
- (struct TSWPFontHeightInfo { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })p_fontHeightInfoForFont:(struct __CTFont { } *)a0 outWidths:(out unsigned long long *)a1;
- (BOOL)p_findEntryForFont:(struct __CTFont { } *)a0 outHeightInfo:(out struct TSWPFontHeightInfo { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; } *)a1 outWidths:(out unsigned long long *)a2 outCollision:(out BOOL *)a3;
- (void)p_addEntryForFont:(struct __CTFont { } *)a0 heightInfo:(const struct TSWPFontHeightInfo { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; } *)a1 widths:(unsigned long long)a2;

@end
