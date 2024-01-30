@class NSDictionary;

@interface KNOutlineSelection : KNSlideCollectionSelection

@property (readonly, nonatomic) NSDictionary *selectedParagraphIndexesForSlideNodes;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInSelectedParagraph;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct SlideCollectionSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<KN::SlideCollectionSelectionArchive_OutlineSelection> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Reference *x6; struct Range *x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct SlideCollectionSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<KN::SlideCollectionSelectionArchive_OutlineSelection> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct Reference *x6; struct Range *x7; } *)a0 archiver:(id)a1;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1;
- (id)contiguousIndexesForSelectedParagraphIndexesForSlideNodes:(id)a0;
- (id)initWithSlideNodes:(id)a0 slideNodeToEdit:(id)a1 selectedParagraphIndexesForSlideNodes:(id)a2 rangeInSelectedParagraph:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })absoluteRangeInStorage:(id)a0;
- (id)estimatedTextSelection;

@end
