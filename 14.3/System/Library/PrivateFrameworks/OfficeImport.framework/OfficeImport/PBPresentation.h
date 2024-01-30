@interface PBPresentation : NSObject

+ (void)setFontEntites:(id)a0 environmentHolder:(id)a1;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)a0 state:(id)a1;
+ (id)drawingGroupHolderWithDocumentContainerHolder:(id)a0;
+ (void)readMasterAndLayouts:(id)a0 masterLayoutMap:(id)a1 state:(id)a2;
+ (void)readSlides:(id)a0 masterLayoutMap:(id)a1 slideIdMap:(id)a2 state:(id)a3 isThumbnail:(BOOL)a4 delegate:(id)a5;
+ (void)readNotes:(id)a0 masterLayoutMap:(id)a1 slideIdMap:(id)a2 state:(id)a3 delegate:(id)a4;
+ (void)readFrom:(struct PptBinaryReader { void /* function */ **x0; void /* function */ **x1; struct EshObjectFactory *x2; void /* function */ **x3; struct __sFILE *x4; struct SsrwOORootStorage { struct _Storage *x0; unsigned short x1[36]; struct _RootStorage *x2; } x5; struct SsrwOOStorage *x6; struct SsrwOOStorage *x7; struct SsrwOOStream *x8; struct SsrwOOStream *x9; int x10; BOOL x11; struct PptEshReader *x12; struct PptEshReader *x13; struct PptParserVisitor *x14; struct PptPersistDir *x15; struct EshHeader *x16; struct EshObject *x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x24; struct PptObjectFactory *x25; struct EshMark *x26; int x27; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> *x0; struct ChPair<unsigned int, EscherObjectEnums> *x1; struct __compressed_pair<ChPair<unsigned int, EscherObjectEnums> *, ChAllocator<ChPair<unsigned int, EscherObjectEnums> > > { struct ChPair<unsigned int, EscherObjectEnums> *x0; } x2; } x28; BOOL x29; } *)a0 to:(id)a1 cancel:(id)a2 asThumbnail:(BOOL)a3 delegate:(id)a4;
+ (void)addHeadersFootersToDocumentContainer:(id)a0 instance:(int)a1;
+ (void)readDefaultTextListStyle:(id)a0 fromDocumentContainer:(id)a1 state:(id)a2;
+ (void)readThemeFromSlideMaster:(id)a0 document:(id)a1 theme:(id)a2 colorMap:(id)a3 state:(id)a4;
+ (void)readTextStylesFromSlideMaster:(id)a0 toSlideMaster:(id)a1 state:(id)a2;
+ (void)readXmlLayoutsFromSlideMaster:(id)a0 document:(id)a1 masterInfo:(id)a2 state:(id)a3;
+ (void)readSlideListWithInstance:(int)a0 documentContainerHolder:(id)a1 state:(id)a2 block:(id /* block */)a3;
+ (void)scanSlideListForLayoutTypes:(id)a0 slideListHolder:(id)a1 masterLayoutMap:(id)a2;
+ (void)readCommentAuthorsFrom:(id)a0 state:(id)a1;
+ (void)processLayoutTypesFromDocument:(id)a0 masterLayoutMap:(id)a1 state:(id)a2;
+ (void)readTextStyleFromNotesMaster:(id)a0 toNotesMaster:(id)a1 slideMaster:(id)a2 state:(id)a3;

@end
