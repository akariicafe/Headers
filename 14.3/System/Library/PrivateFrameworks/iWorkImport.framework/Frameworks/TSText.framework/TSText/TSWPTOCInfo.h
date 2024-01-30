@class NSArray, NSSet, NSString, TSWPTOCSettings, TSWPTOCPartitioner;

@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider> {
    TSWPTOCPartitioner *_partitioner;
}

@property (retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries;
@property (readonly, nonatomic) NSArray *visibleTOCEntries;
@property (retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings;
@property (nonatomic) BOOL shouldSyncTOCSettingsWithTOCNavigator;
@property (retain, nonatomic) NSArray *pageNumberRanges;
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPartitionInline;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (unsigned int)elementKind;
- (BOOL)isSelectable;
- (Class)repClass;
- (void)acceptVisitor:(id)a0;
- (BOOL)textIsVertical;
- (BOOL)allowsTitle;
- (id)referencedStyles;
- (BOOL)supportsAttachedComments;
- (Class)editorClass;
- (id)partitioner;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)allowsCaption;
- (BOOL)wantsPositionFixedWhenCopying;
- (void)i_setTOCEntries:(id)a0;
- (void)regenerateStorageContent;
- (void)i_setTOCSettings:(id)a0;
- (BOOL)p_startingTOCIsRTLForEntries:(id)a0;
- (void)resetStorageStyles;
- (void)loadTOCInfoMessage:(const struct TOCInfoArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Range> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct ShapeInfoArchive *x6; struct Reference *x7; BOOL x8; } *)a0 unarchiver:(id)a1;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Range> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct ShapeInfoArchive *x6; struct Reference *x7; BOOL x8; } *)a0 archiver:(id)a1;
- (id)textualEquivalent;
- (id)containedStorageFormattedUsingParagraphStyle:(id)a0;
- (id)containedStorageFormattedUsingParagraphStyles;

@end
