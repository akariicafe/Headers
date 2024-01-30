@class NSSet, TSUNoCopyDictionary, NSArray, NSString, NSObject, NSDictionary;
@protocol TSDHint, TSWPTopicNumberHints;

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {
    NSArray *_hints;
    TSUNoCopyDictionary *_flowHints;
    NSObject<TSWPTopicNumberHints> *_topicNumbers;
    NSDictionary *_flowTopicNumbers;
    BOOL _isCopyForCaching;
}

@property (nonatomic) long long pageKind;
@property (nonatomic) unsigned long long pageColumn;
@property (nonatomic) unsigned long long pageRow;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footnoteAutoNumberRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footnoteLayoutRange;
@property (nonatomic) BOOL hasForcedFootnotes;
@property (retain, nonatomic) TSUNoCopyDictionary *anchoredDrawablePositions;
@property (retain, nonatomic) NSSet *startingPartitionedAttachments;
@property (readonly, nonatomic) id<TSDHint> firstChildHint;
@property (readonly, nonatomic) id<TSDHint> lastChildHint;
@property (retain, nonatomic) NSArray *childHints;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *topicNumbers;
@property (readonly, nonatomic) unsigned long long lineCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } anchoredRange;
@property (readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (readonly, nonatomic) BOOL terminatedByBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hints;
- (id)firstColumn;
- (id)lastColumn;
- (id)copyForArchiving;
- (id)initWithArchive:(const struct PageHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::TargetHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TP::AnchorPosArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TP::TargetHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TP::TopicNumberHintsArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct Range *x11; struct Range *x12; struct Reference *x13; struct Reference *x14; struct TopicNumberHintsArchive *x15; int x16; unsigned int x17; unsigned int x18; int x19; unsigned int x20; unsigned int x21; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct PageHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::TargetHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TP::AnchorPosArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::UUID> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TP::TargetHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TP::TopicNumberHintsArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct Range *x11; struct Range *x12; struct Reference *x13; struct Reference *x14; struct TopicNumberHintsArchive *x15; int x16; unsigned int x17; unsigned int x18; int x19; unsigned int x20; unsigned int x21; } *)a0 archiver:(id)a1 context:(id)a2;
- (id)firstHint;
- (id)lastHint;
- (void)trimToCharIndex:(unsigned long long)a0 inTarget:(id)a1 removeFootnoteReferenceCount:(unsigned long long)a2 removeAutoNumberFootnoteCount:(unsigned long long)a3;
- (id)flowHints;
- (id)flowTopicNumbers;
- (BOOL)syncsFlowRanges:(id)a0 withEndOfPageHint:(id)a1;
- (void)setHints:(id)a0 topicNumbers:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_range;
- (BOOL)p_unarchiveHint:(id)a0 fromArchive:(const struct TargetHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Point *x4; struct Size *x5; struct Range *x6; struct Range *x7; struct DoublePoint *x8; struct DoubleSize *x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; } *)a1;
- (void)p_unarchiveTopicNumbers:(id)a0 fromArchive:(const struct TopicNumberHintsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::TopicNumberEntryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; unsigned int x6; } *)a1 unarchiver:(id)a2;
- (void)p_archiveHint:(id)a0 intoArchive:(struct TargetHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Point *x4; struct Size *x5; struct Range *x6; struct Range *x7; struct DoublePoint *x8; struct DoubleSize *x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; } *)a1;
- (void)p_archiveTopicNumbers:(id)a0 intoArchive:(struct TopicNumberHintsArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::TopicNumberEntryArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; unsigned int x6; } *)a1 archiver:(id)a2;
- (id)copyForCaching;
- (void)setFlowHints:(id)a0 flowTopicNumbers:(id)a1;
- (void)offsetStartCharIndexBy:(long long)a0 charIndex:(unsigned long long)a1;
- (BOOL)syncsWithEndOfPageHint:(id)a0 bodyStorage:(id)a1 flowRanges:(id)a2;
- (void)updateRangeForIndexPath:(id)a0 withStorage:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAndChildHints:(out id *)a0;

@end
