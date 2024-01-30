@class NSString, KNNoteInfo, NSMutableSet, KNMasterSlide;

@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject> {
    KNMasterSlide *_master;
}

@property (retain, nonatomic) KNMasterSlide *master;
@property (retain, nonatomic) KNNoteInfo *note;
@property (readonly, nonatomic) BOOL slideObjectsLayerWithMaster;
@property (readonly, nonatomic) NSMutableSet *infosUsingObjectPlaceholderGeometry;
@property (readonly, nonatomic) BOOL areInfosUsingObjectPlaceholderGeometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blankSlideWithSlideNode:(id)a0 master:(id)a1 andShow:(id)a2;

- (void).cxx_destruct;
- (id)childEnumerator;
- (void)acceptVisitor:(id)a0;
- (id)infosToDisplay;
- (id)packageLocator;
- (BOOL)isComponentRoot;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)insertDrawables:(id)a0 atIndex:(unsigned long long)a1 dolcContext:(id)a2;
- (BOOL)isMasterSlide;
- (void)loadFromArchive:(const struct SlideArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<KN::BuildChunkArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSD::GuideArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x11; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x12; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x13; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x14; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x15; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x16; struct Reference *x17; struct TransitionArchive *x18; struct Reference *x19; struct Reference *x20; struct GeometryArchive *x21; struct GeometryArchive *x22; struct Reference *x23; struct Reference *x24; struct GeometryArchive *x25; struct ShapeStylePropertiesArchive *x26; struct ShapeStylePropertiesArchive *x27; struct ShapeStylePropertiesArchive *x28; struct Reference *x29; struct Reference *x30; struct Reference *x31; struct Reference *x32; struct Reference *x33; struct SlideArchive_InstructionalTextMap *x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; } *)a0 unarchiver:(id)a1;
- (void)removeDrawable:(id)a0;
- (void)saveToArchive:(struct SlideArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<KN::BuildChunkArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSD::GuideArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x11; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x12; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x13; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x14; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x15; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x16; struct Reference *x17; struct TransitionArchive *x18; struct Reference *x19; struct Reference *x20; struct GeometryArchive *x21; struct GeometryArchive *x22; struct Reference *x23; struct Reference *x24; struct GeometryArchive *x25; struct ShapeStylePropertiesArchive *x26; struct ShapeStylePropertiesArchive *x27; struct ShapeStylePropertiesArchive *x28; struct Reference *x29; struct Reference *x30; struct Reference *x31; struct Reference *x32; struct Reference *x33; struct SlideArchive_InstructionalTextMap *x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; } *)a0 archiver:(id)a1;
- (id)defaultTitlePlaceholder;
- (id)defaultBodyPlaceholder;
- (id)defaultSlideNumberPlaceholder;
- (id)paragraphIndexesOfTopLevelBullets;
- (id)initWithSlideNode:(id)a0 master:(id)a1 andShow:(id)a2;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)setToMaster:(id)a0;
- (void)setMaster:(id)a0 resetMasterBackgroundObjects:(BOOL)a1;
- (BOOL)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)a0;
- (void)removeInfoUsingObjectPlaceholderGeometry:(id)a0;
- (void)p_checkMaster;
- (BOOL)p_urlIsSlideSpecific:(id)a0;
- (id)p_slideNodeUUIDStringFromURL:(id)a0;
- (void)addInfoUsingObjectPlaceholderGeometry:(id)a0;
- (void)setInfosUsingObjectPlaceholderGeometry:(id)a0;
- (id)infoCorrespondingToMasterInfo:(id)a0;
- (BOOL)isNoteSelectionPath:(id)a0;
- (void)updateSlideSpecificLinkMapForInfo:(id)a0 newHyperlink:(id)a1;
- (void)updateSlideSpecificHyperlinkMapForStorage:(id)a0 oldHyperlink:(id)a1 newHyperlink:(id)a2;
- (void)removeMapForStorage:(id)a0 forHyperlink:(id)a1;
- (void)addMapForStorage:(id)a0 forHyperlink:(id)a1;

@end
