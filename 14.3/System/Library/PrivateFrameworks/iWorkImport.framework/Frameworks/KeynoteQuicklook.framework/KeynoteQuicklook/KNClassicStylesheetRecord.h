@class NSDictionary, NSString;

@interface KNClassicStylesheetRecord : TSPObject <TSKModel>

@property (retain, nonatomic) NSDictionary *identifierToStyleMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)childEnumerator;
- (id)referencedStyles;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromArchive:(const struct ClassicStylesheetRecordArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSS::StylesheetArchive_IdentifiedStyleEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ClassicStylesheetRecordArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSS::StylesheetArchive_IdentifiedStyleEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
