@class NSUUID, NSString, NSURL, NSArray, TPPageTemplate, TSDFill, TPPageMaster, TSWPStorage;

@interface TPSection : TSPObject <TSKDocumentObject, TSKModel, TSWPSection> {
    TPPageMaster *_pageMasters[3];
    TSWPStorage *_parentStorage;
    NSString *_name;
    NSUUID *_sectionHyperlinkUUID;
    BOOL _inheritPreviousHeaderFooter;
    BOOL _pageMasterFirstPageDifferent;
    BOOL _pageMasterFirstPageHidesHeaderFooter;
    BOOL _pageMasterEvenOddPagesDifferent;
    unsigned int _sectionStartKind;
    unsigned int _sectionPageNumberKind;
    unsigned int _sectionPageNumberStart;
}

@property (readonly, nonatomic) TPPageTemplate *pageTemplate;
@property (readonly, nonatomic) NSArray *pageInfosForPropagation;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *sectionHyperlinkUUID;
@property (readonly, nonatomic) NSString *localizedPrettyDisplayStringShort;
@property (readonly, nonatomic) NSString *localizedPrettyDisplayStringLong;
@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (nonatomic) BOOL inheritPreviousHeaderFooter;
@property (nonatomic) BOOL pageMasterFirstPageDifferent;
@property (nonatomic) BOOL pageMasterFirstPageHidesHeaderFooter;
@property (nonatomic) BOOL pageMasterEvenOddPagesDifferent;
@property (retain, nonatomic) TSDFill *backgroundFill;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) unsigned int sectionStartKind;
@property (nonatomic) unsigned int sectionPageNumberKind;
@property (nonatomic) unsigned int sectionPageNumberStart;
@property (readonly, nonatomic) NSArray *pageMasters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needsObjectUUID;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)childEnumerator;
- (id)allDrawables;
- (void)acceptVisitor:(id)a0;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)a0;
- (id)objectUUIDPath;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isHeaderFooterEmpty:(long long)a0;
- (void)i_clearPropertiesToDefaults;
- (void)p_makeUserGuideStorage;
- (void)p_unarchiveAndUpgrade:(id)a0 archive:(const struct SectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct Reference *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct FillArchive *x12; struct UUID *x13; float x14; float x15; float x16; float x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; float x22; float x23; float x24; float x25; float x26; float x27; unsigned int x28; unsigned int x29; BOOL x30; BOOL x31; BOOL x32; unsigned int x33; } *)a1;
- (void)p_upgradePageSizeAndMarginsFromParsedArchive:(const struct SectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct Reference *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct FillArchive *x12; struct UUID *x13; float x14; float x15; float x16; float x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; float x22; float x23; float x24; float x25; float x26; float x27; unsigned int x28; unsigned int x29; BOOL x30; BOOL x31; BOOL x32; unsigned int x33; } *)a0;
- (id)initWithContext:(id)a0 section:(id)a1;
- (id)pageMasterForType:(long long)a0;
- (void)i_copyHeadersAndFootersFrom:(id)a0 dolcContext:(id)a1 withBlock:(id /* block */)a2;
- (void)p_addAllDrawablesFromInfo:(id)a0 toMutableArray:(id)a1;
- (BOOL)isHeaderFooterVisible:(long long)a0;
- (void)setPageMasterForFirstPage:(id)a0;
- (id)pageMasterOwningModel:(id)a0;

@end
