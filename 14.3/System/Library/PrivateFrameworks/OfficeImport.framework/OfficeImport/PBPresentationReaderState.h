@class PDSlideBase, PDPresentation, ESDObject, PBSlideState, ESDRoot, PBOfficeArtReaderState, NSMutableDictionary, NSMutableArray, OITSUNoCopyDictionary, ESDContainer, PBOutlineBulletDictionary;
@protocol TCCancelDelegate;

@interface PBPresentationReaderState : NSObject {
    struct PptBinaryReader { void /* function */ **x0; void /* function */ **x1; struct EshObjectFactory *x2; void /* function */ **x3; struct __sFILE *x4; struct SsrwOORootStorage { struct _Storage *x0; unsigned short x1[36]; struct _RootStorage *x2; } x5; struct SsrwOOStorage *x6; struct SsrwOOStorage *x7; struct SsrwOOStream *x8; struct SsrwOOStream *x9; int x10; BOOL x11; struct PptEshReader *x12; struct PptEshReader *x13; struct PptParserVisitor *x14; struct PptPersistDir *x15; struct EshHeader *x16; struct EshObject *x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x24; struct PptObjectFactory *x25; struct EshMark *x26; int x27; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> *x0; struct ChPair<unsigned int, EscherObjectEnums> *x1; struct __compressed_pair<ChPair<unsigned int, EscherObjectEnums> *, ChAllocator<ChPair<unsigned int, EscherObjectEnums> > > { struct ChPair<unsigned int, EscherObjectEnums> *x0; } x2; } x28; BOOL x29; } *mPptBinaryReader;
    PDPresentation *mTgtPresentation;
    ESDRoot *mDocumentRoot;
    struct ChVector<_NSRange> { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, ChAllocator<_NSRange> > { struct _NSRange *x0; } x2; } *mCurrentSlideTextBlockRecordIndexRangeVector;
    unsigned int mSrcSlideId;
    NSMutableArray *mSlideIndexes;
    OITSUNoCopyDictionary *mSlideMasterToMasterStyles;
    struct __CFDictionary { } *mHyperlinkMap;
    PBOfficeArtReaderState *mOfficeArtState;
    NSMutableArray *mFontEntities;
    PDSlideBase *mTgtSlide;
    BOOL mHasCharacterPropertyBulletIndex;
    unsigned int mBulletIndex;
    PBOutlineBulletDictionary *mPlaceholderBulletStyles;
    PBOutlineBulletDictionary *mPlaceholderMacCharStyles;
    ESDObject *mCurrentBulletStyle;
    ESDObject *mCurrentMacCharStyle;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo *x0; struct PBReaderMasterStyleInfo *x1; struct __compressed_pair<PBReaderMasterStyleInfo *, ChAllocator<PBReaderMasterStyleInfo> > { struct PBReaderMasterStyleInfo *x0; } x2; } *mSrcDocMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo *x0; struct PBReaderMasterStyleInfo *x1; struct __compressed_pair<PBReaderMasterStyleInfo *, ChAllocator<PBReaderMasterStyleInfo> > { struct PBReaderMasterStyleInfo *x0; } x2; } *mSrcCurrentMasterStyleInfoVector;
    PBSlideState *mSlideState;
    NSMutableDictionary *mTargetShapeToSourceTextBoxContainerHolderMap;
}

@property (retain) ESDContainer *sourceSlideListHolder;
@property (retain, nonatomic) id<TCCancelDelegate> cancelDelegate;
@property BOOL hasSlideNumberPlaceholder;

- (id)documentRoot;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (struct PptBinaryReader { void /* function */ **x0; void /* function */ **x1; struct EshObjectFactory *x2; void /* function */ **x3; struct __sFILE *x4; struct SsrwOORootStorage { struct _Storage *x0; unsigned short x1[36]; struct _RootStorage *x2; } x5; struct SsrwOOStorage *x6; struct SsrwOOStorage *x7; struct SsrwOOStream *x8; struct SsrwOOStream *x9; int x10; BOOL x11; struct PptEshReader *x12; struct PptEshReader *x13; struct PptParserVisitor *x14; struct PptPersistDir *x15; struct EshHeader *x16; struct EshObject *x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x24; struct PptObjectFactory *x25; struct EshMark *x26; int x27; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> *x0; struct ChPair<unsigned int, EscherObjectEnums> *x1; struct __compressed_pair<ChPair<unsigned int, EscherObjectEnums> *, ChAllocator<ChPair<unsigned int, EscherObjectEnums> > > { struct ChPair<unsigned int, EscherObjectEnums> *x0; } x2; } x28; BOOL x29; } *)reader;
- (void)dealloc;
- (void)setDocumentRoot:(id)a0;
- (id)officeArtState;
- (void)resetSlideState;
- (id)slideState;
- (id)tgtSlide;
- (id)currentMacCharStyle;
- (BOOL)hasCharacterPropertyBulletIndex;
- (void)setBulletIndex:(unsigned int)a0;
- (id)fontEntityAtIndex:(unsigned long long)a0;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)a0;
- (void)setSourceTextBoxContainerHolder:(id)a0 forTargetShape:(id)a1;
- (struct ChVector<_NSRange> { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, ChAllocator<_NSRange> > { struct _NSRange *x0; } x2; } *)currentSlideTextBlockRecordIndexRangeVector;
- (void)setCurrentTextType:(int)a0 placeholderIndex:(unsigned int)a1;
- (id)initWithReader:(struct PptBinaryReader { void /* function */ **x0; void /* function */ **x1; struct EshObjectFactory *x2; void /* function */ **x3; struct __sFILE *x4; struct SsrwOORootStorage { struct _Storage *x0; unsigned short x1[36]; struct _RootStorage *x2; } x5; struct SsrwOOStorage *x6; struct SsrwOOStorage *x7; struct SsrwOOStream *x8; struct SsrwOOStream *x9; int x10; BOOL x11; struct PptEshReader *x12; struct PptEshReader *x13; struct PptParserVisitor *x14; struct PptPersistDir *x15; struct EshHeader *x16; struct EshObject *x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x24; struct PptObjectFactory *x25; struct EshMark *x26; int x27; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> *x0; struct ChPair<unsigned int, EscherObjectEnums> *x1; struct __compressed_pair<ChPair<unsigned int, EscherObjectEnums> *, ChAllocator<ChPair<unsigned int, EscherObjectEnums> > > { struct ChPair<unsigned int, EscherObjectEnums> *x0; } x2; } x28; BOOL x29; } *)a0 tgtPresentation:(id)a1;
- (void)addFontEntity:(id)a0 charSet:(int)a1 type:(int)a2 family:(int)a3;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom *x0; struct PptTextMasterStyle9Atom *x1; } *)docSourceMasterStyleInfoOfType:(int)a0;
- (id)tgtPresentation;
- (id)masterStyles:(id)a0;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo *x0; struct PBReaderMasterStyleInfo *x1; struct __compressed_pair<PBReaderMasterStyleInfo *, ChAllocator<PBReaderMasterStyleInfo> > { struct PBReaderMasterStyleInfo *x0; } x2; } *)a0;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom *x0; struct PptTextMasterStyle9Atom *x1; } *)currentSourceMasterStyleInfoOfType:(int)a0;
- (void)setSourceSlideId:(unsigned int)a0;
- (void)setCurrentBulletStyle:(id)a0 macCharStyle:(id)a1;
- (unsigned long long)numberOfSlideIndexes;
- (void)addSlideIndex:(unsigned long long)a0;
- (unsigned long long)getSlideIndexAt:(unsigned long long)a0;
- (id)slideIndexesRef;
- (unsigned long long)fontEntityCount;
- (void)setTgtSlide:(id)a0;
- (void)setHasCharacterPropertyBulletIndex:(BOOL)a0;
- (unsigned int)bulletIndex;
- (void)setPlaceholderBulletStyles:(id)a0;
- (void)setPlaceholderMacCharStyles:(id)a0;
- (id)currentBulletStyle;
- (void)setMasterStyles:(id)a0 slideMaster:(id)a1;
- (BOOL)hasCurrentSourceMasterStyleInfoVector;
- (id)hyperlinkInfoWithId:(unsigned int)a0 createIfAbsent:(BOOL)a1;

@end
