@class NSString, EQKitEquation, TSSPropertyMap;

@interface TSWPEquationInfo : TSDImageInfo <TSWPDrawableAttachmentDescriptionProvider, TSDDrawableInfoCustomUnarchivingSubclassProviding>

@property (retain, nonatomic) EQKitEquation *equation;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) double depth;
@property (retain, nonatomic) TSSPropertyMap *textProperties;
@property (readonly, nonatomic) int format;
@property (nonatomic) BOOL isInlineForPreviewImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTextProperties;
+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;
+ (id)fontNameFromTextProperties:(id)a0;
+ (BOOL)archiveHasEquationSource:(id)a0;
+ (id)equationInfoWithContext:(id)a0 string:(id)a1 textStorage:(id)a2 charIndex:(unsigned long long)a3;
+ (id)propertiesForStorage:(id)a0 characterIndex:(unsigned long long)a1;
+ (id)filteredTextPropertiesFromTextProperties:(id)a0;
+ (id)eqKitEquationWithWithContext:(id)a0 source:(id)a1 error:(id *)a2;
+ (id)pdfImageDataWithContext:(id)a0 equation:(id)a1 layout:(id)a2 layoutContext:(id)a3 sourceString:(id)a4;
+ (id)propertiesForParagraphStyle:(id)a0 characterStyle:(id)a1;
+ (id)equationAttachmentWithEquationAttachment:(id)a0;
+ (id)equationInfoWithContext:(id)a0 equationInfo:(id)a1 textStorage:(id)a2 charIndex:(unsigned long long)a3;
+ (id)propertiesForChangePropagation;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (unsigned int)elementKind;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (void)willChangeProperty:(int)a0;
- (BOOL)canAnchor;
- (BOOL)canChangeWrapType;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (struct CGSize { double x0; double x1; })defaultOriginalSize;
- (struct CGSize { double x0; double x1; })rawDataSize;
- (BOOL)canResetMediaSize;
- (void)loadFromArchive:(const struct ImageArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct DrawableArchive *x5; struct Reference *x6; struct Reference *x7; struct Size *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct Size *x12; struct Path *x13; struct DataReference *x14; struct DataReference *x15; struct DataReference *x16; struct ImageAdjustmentsArchive *x17; struct DataReference *x18; struct DataReference *x19; struct DataReference *x20; struct Path *x21; struct Attribution *x22; unsigned int x23; BOOL x24; BOOL x25; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ImageArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct DrawableArchive *x5; struct Reference *x6; struct Reference *x7; struct Size *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct Size *x12; struct Path *x13; struct DataReference *x14; struct DataReference *x15; struct DataReference *x16; struct ImageAdjustmentsArchive *x17; struct DataReference *x18; struct DataReference *x19; struct DataReference *x20; struct Path *x21; struct Attribution *x22; unsigned int x23; BOOL x24; BOOL x25; } *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (id)promisedDataForType:(id)a0;
- (BOOL)canBeMasked;
- (BOOL)canAdjustImage;
- (BOOL)supportsStyleInspecting;
- (BOOL)canBeMediaPlaceholder;
- (void)didFinalizeUnarchivingFromWPStorage:(id)a0;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (void)updateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1;
- (void)loadCharacterStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct CharacterStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<2> { unsigned int x0[2]; } x2; struct RepeatedPtrField<TSWP::FontFeatureArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct Color *x8; struct Color *x9; struct ShadowArchive *x10; struct Color *x11; struct Color *x12; struct Color *x13; struct StrokeArchive *x14; struct FillArchive *x15; float x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; int x21; int x22; int x23; int x24; float x25; float x26; int x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; float x32; float x33; float x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; float x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; int x49; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x50; } *)a1 unarchiver:(id)a2;
- (BOOL)needsUpdateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1 isAnchoredOrFloating:(BOOL)a2;
- (void)updateForStyleChangeToStorage:(id)a0 charIndex:(unsigned long long)a1 isAnchoredOrFloating:(BOOL)a2;
- (id)initWithContext:(id)a0 string:(id)a1 textProperties:(id)a2;
- (id)initWithContext:(id)a0 string:(id)a1 filteredTextProperties:(id)a2 equation:(id)a3 pdfImageData:(id)a4 depth:(double)a5 geometry:(id)a6 style:(id)a7;
- (void)rebuildEquationPDFIncludingGeometry:(BOOL)a0;
- (id)propertiesForParentAttachment;
- (void)updateTextProperties:(id)a0;
- (void)saveCharacterStylePropertiesFromPropertyMap:(id)a0 toArchive:(struct CharacterStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<2> { unsigned int x0[2]; } x2; struct RepeatedPtrField<TSWP::FontFeatureArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct Color *x8; struct Color *x9; struct ShadowArchive *x10; struct Color *x11; struct Color *x12; struct Color *x13; struct StrokeArchive *x14; struct FillArchive *x15; float x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; int x21; int x22; int x23; int x24; float x25; float x26; int x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; float x32; float x33; float x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; float x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; int x49; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x50; } *)a1 archiver:(id)a2;
- (id)descriptionForDrawableAttachment:(id)a0;
- (id)initWithContext:(id)a0 string:(id)a1;
- (id)initWithContext:(id)a0 string:(id)a1 targetGeometry:(id)a2;
- (void)replaceSourceWithNewSource:(id)a0;
- (id)imageDataWithObjectContext:(id)a0;

@end
