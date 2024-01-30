@class TSDShapeInfo;

@interface TSDFreehandDrawingInfo : TSDGroupInfo

@property (readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape;
@property (nonatomic) double opacity;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)allowsTitle;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (id)childEnumeratorForUserSearch;
- (void)saveToArchive:(struct GroupArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct DrawableArchive *x6; struct Reference *x7; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)allowsCaption;
- (void)loadFromArchive:(const struct GroupArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct DrawableArchive *x6; struct Reference *x7; } *)a0 unarchiver:(id)a1 upgradeDOLC:(BOOL)a2;
- (BOOL)isFreehandDrawing;
- (id)infosToObserveForAttachedInfo;
- (id)allNestedChildrenInfosForWrap;
- (id)initWithSpacerShapeAndContext:(id)a0 geometry:(id)a1;
- (BOOL)shouldHaveFakeShapeInfoForPersistingEmptyGroup;
- (void)setFreehandDrawingSpacerShape:(id)a0;
- (BOOL)isEffectivelyEmpty;
- (id)tsaxTypeDescription;

@end
