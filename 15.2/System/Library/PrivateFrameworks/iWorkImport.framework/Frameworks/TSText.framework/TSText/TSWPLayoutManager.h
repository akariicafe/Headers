@class NSString, TSWPMutableDirtyRangeArray, TSWPStorage, _TtC6TSText16TSWPTopicNumbers, TSWPCTTypesetterCache;
@protocol TSWPLayoutOwner;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding> {
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    BOOL _shouldClearTypesetterCache;
    TSWPCTTypesetterCache *_typesetterCache;
}

@property (readonly, weak, nonatomic) id<TSWPLayoutOwner> owner;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly, nonatomic) TSWPMutableDirtyRangeArray *dirtyRanges;
@property (readonly, nonatomic) TSWPCTTypesetterCache *typesetterCache;
@property (readonly, nonatomic) BOOL layoutFinished;
@property (readonly, nonatomic) BOOL isLayingOut;
@property (readonly, nonatomic) _TtC6TSText16TSWPTopicNumbers *topicNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setTransformForColumn:(id)a0 inTarget:(id)a1 metrics:(id)a2;
+ (void)fixColumnBoundsForTarget:(id)a0 storage:(id)a1 charIndex:(unsigned long long)a2 firstColumnIndex:(unsigned long long)a3 precedingHeight:(double)a4 height:(double)a5 alreadyHasMargins:(BOOL)a6 styleProvider:(id)a7;
+ (void)setTransformForColumn:(id)a0 andInvalidateWPRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inTarget:(id)a2;

- (id)styleProvider;
- (void).cxx_destruct;
- (void)dealloc;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(unsigned long long)a3;
- (id)initWithStorage:(id)a0 owner:(id)a1;
- (void)destroyLayoutState:(void *)a0;
- (void)clearOwner;
- (unsigned long long)p_layoutConfigFlagsForTarget:(id)a0;
- (void)clearTypesetterCache;
- (void)willRemoveAttachmentLayout:(id)a0;
- (BOOL)needsLayoutInColumn:(id)a0;
- (id)styleProviderForTextLayout:(id)a0;
- (BOOL)wantsToProvideStylesForTextLayout:(id)a0;
- (void *)layoutStateForLayoutWithHint:(id)a0 firstTarget:(id)a1;
- (void *)layoutStateForLayoutAfterHint:(id)a0 firstTarget:(id)a1 childHint:(id)a2;
- (void *)layOutIntoTarget:(id)a0 withLayoutState:(void *)a1 outSync:(BOOL *)a2;
- (void)removeDirtyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)deflateTarget:(id)a0 intoHints:(inout id)a1 childHints:(inout id)a2 anchoredDrawablePositions:(id *)a3 startingPartitionedAttachments:(out id *)a4 topicNumberHints:(out id *)a5 layoutState:(void *)a6;
- (void)inflateTarget:(id)a0 fromHints:(id)a1 childHint:(id)a2 anchoredDrawablePositions:(id)a3 footnoteLayoutRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)resetDirtyRange;
- (id)layoutMetricsCache;

@end
