@class NSObject, TSWPStorage, TSWPCTTypesetterCache;
@protocol TSWPStyleProvider, TSWPLayoutOwner;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver> {
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    long long _delta;
    TSWPCTTypesetterCache *_typesetterCache;
    struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>, std::less<const TSWPListStyle *>, std::allocator<std::pair<const TSWPListStyle *const, std::vector<TSWPTopicNumberEntry> > > > { struct __tree<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry> >, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry> >, std::less<const TSWPListStyle *>, true>, std::allocator<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry> > > > { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry> >, void *> > > { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry> >, std::less<const TSWPListStyle *>, true> > { unsigned long long __value_; } __pair3_; } __tree_; } _numbersForListStyle; unsigned long long _charIndex; unsigned long long _validThroughCharIndex; NSObject<TSWPStyleProvider> *_styleProvider; } _cachedTopicNumbers;
}

@property (readonly, nonatomic) id<TSWPLayoutOwner> owner;
@property (readonly, retain, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dirtyRange;
@property (readonly, retain, nonatomic) TSWPCTTypesetterCache *typesetterCache;

+ (void)fixColumnBoundsForTarget:(id)a0 storage:(id)a1 charIndex:(unsigned long long)a2 firstColumnIndex:(unsigned long long)a3 precedingHeight:(double)a4 height:(double)a5 alreadyHasMargins:(BOOL)a6 styleProvider:(id)a7 vertical:(BOOL)a8;

- (id)styleProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(int)a3;
- (id)initWithStorage:(id)a0 owner:(id)a1;
- (void)resetTopicNumbers;
- (void *)layoutIntoTarget:(id)a0 withLayoutState:(void *)a1 outSync:(BOOL *)a2;
- (void)destroyLayoutState:(void *)a0;
- (void)clearOwner;
- (int)p_layoutConfigFlagsForTarget:(id)a0;
- (void)clearTypesetterCache;
- (void)willRemoveAttachmentLayout:(id)a0;
- (BOOL)needsLayoutInColumn:(id)a0;
- (double)layoutIntoTarget:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void *)layoutStateForLayoutTarget:(id)a0 afterHint:(const struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; unsigned long long x4; } *)a1 childHint:(id)a2 topicNumbers:(const void *)a3 textIsVertical:(BOOL)a4;
- (void)deflateTarget:(id)a0 intoHints:(void *)a1 childHints:(id[2])a2 anchoredAttachmentPositions:(id *)a3 topicNumbers:(void *)a4 layoutState:(void *)a5;
- (void)inflateTarget:(id)a0 fromHints:(const void *)a1 childHint:(id)a2 anchoredAttachmentPositions:(id)a3 topicNumbers:(const void *)a4;

@end
