@interface PBReader : OCBReader {
    struct PptObjectFactory { void /* function */ **x0; struct PptEshObjectFactory *x1; } *mPptObjectFactory;
    const void *mBuffer;
}

@property (readonly, nonatomic) struct PptBinaryReader { void /* function */ **x0; void /* function */ **x1; struct EshObjectFactory *x2; void /* function */ **x3; struct __sFILE *x4; struct SsrwOORootStorage { struct _Storage *x0; unsigned short x1[36]; struct _RootStorage *x2; } x5; struct SsrwOOStorage *x6; struct SsrwOOStorage *x7; struct SsrwOOStream *x8; struct SsrwOOStream *x9; int x10; BOOL x11; struct PptEshReader *x12; struct PptEshReader *x13; struct PptParserVisitor *x14; struct PptPersistDir *x15; struct EshHeader *x16; struct EshObject *x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x0; } x2; } x0; } x0; } x24; struct PptObjectFactory *x25; struct EshMark *x26; int x27; struct ChVector<ChPair<unsigned int, EscherObjectEnums> > { struct ChPair<unsigned int, EscherObjectEnums> *x0; struct ChPair<unsigned int, EscherObjectEnums> *x1; struct __compressed_pair<ChPair<unsigned int, EscherObjectEnums> *, ChAllocator<ChPair<unsigned int, EscherObjectEnums> > > { struct ChPair<unsigned int, EscherObjectEnums> *x0; } x2; } x28; BOOL x29; } *pptReader;

- (id)read;
- (void)dealloc;
- (BOOL)start;
- (id)initWithCancelDelegate:(id)a0;
- (struct OCCBinaryStreamer { void /* function */ **x0; struct OCCCryptoKey *x1; char *x2; } *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { } *)a0 baseOutputFilenameInUTF8:(const char *)a1;
- (struct OCCEncryptionInfoReader { void /* function */ **x0; } *)encryptionInfoReader;

@end
