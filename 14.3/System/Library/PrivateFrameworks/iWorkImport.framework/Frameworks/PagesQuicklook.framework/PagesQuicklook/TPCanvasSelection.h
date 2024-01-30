@class NSSet, NSString;

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection> {
    NSSet *mInfos;
    NSSet *mExcludedInfos;
    NSSet *mAdditionalInfos;
}

@property (readonly, nonatomic) int canvasSelectionKind;
@property (readonly, nonatomic) NSSet *rawInfos;
@property (readonly, nonatomic) NSSet *rawExcludedInfos;
@property (readonly, nonatomic) NSSet *rawAdditionalInfos;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;
+ (id)canvasSelectionFromSelection:(id)a0;
+ (id)canvasSelectionFromSelection:(id)a0 withInfos:(id)a1;
+ (id)canvasSelectionFromCanvasSelection:(id)a0 withToggledInfo:(id)a1;
+ (id)selectionWithInfos:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsKindOfClass:(Class)a0;
- (BOOL)containsUnlockedKindOfClass:(Class)a0;
- (id)infosOfClass:(Class)a0;
- (id)copyIncludingInfo:(id)a0;
- (id)copyExcludingInfo:(id)a0;
- (id)initWithInfos:(id)a0;
- (id)initWithArchive:(const struct CanvasSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct Range *x7; struct Reference *x8; int x9; int x10; int x11; } *)a0 unarchiver:(id)a1;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithNewType:(int)a0;
- (id)copyWithNewType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 head:(unsigned long long)a1 tail:(unsigned long long)a2;
- (id)copyWithNewType:(int)a0 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualRanges:(id)a0;
- (void)saveToArchive:(struct CanvasSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct Range *x7; struct Reference *x8; int x9; int x10; int x11; } *)a0 archiver:(id)a1;
- (id)UUIDDescription;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6 infos:(id)a7 excludedInfos:(id)a8 additionalInfos:(id)a9;
- (id)p_UUIDDescriptionsForInfosSet:(id)a0;
- (void)p_commonCopyTo:(id)a0;
- (id)copyWithNewStyleInsertionBehavior:(int)a0 newCaretAffinity:(int)a1;
- (id)copyWithVisualRanges:(id)a0 headCharIndex:(unsigned long long)a1 tailCharIndex:(unsigned long long)a2 rightToLeft:(BOOL)a3 sameLine:(BOOL)a4;
- (id)initWithTextSelection:(id)a0 infos:(id)a1 excludedInfos:(id)a2 additionalInfos:(id)a3;

@end
