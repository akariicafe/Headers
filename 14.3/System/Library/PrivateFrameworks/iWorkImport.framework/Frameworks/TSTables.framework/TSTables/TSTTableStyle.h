@class NSString, TSDStroke;

@interface TSTTableStyle : TSSStyle <TSTTableStrokeProviding, TSDMixing>

@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5InteriorStroke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)properties;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned long long)a0;
+ (id)nonEmphasisTableProperties;
+ (unsigned long long)presetIDForStyleID:(id)a0;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2;
+ (void)initDefaultPropertyMap:(id)a0 presetID:(unsigned long long)a1 colors:(id)a2 alternate:(int)a3;

- (void)validate;
- (id)initWithContext:(id)a0 name:(id)a1 overridePropertyMap:(id)a2 isVariation:(BOOL)a3;
- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)a0;
- (id)verticalStrokeForStrokePreset:(unsigned long long)a0;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)a0;
- (unsigned int)maskForStrokePreset:(unsigned long long)a0;
- (id)strokeForStrokePreset:(unsigned long long)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (unsigned int)maskForStrokePresets:(id)a0;
- (void)loadTableStylePropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct TableStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<3> { unsigned int x0[3]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct FillArchive *x5; struct Deprecated_TableStrokeArchive *x6; struct Deprecated_TableStrokeArchive *x7; struct Deprecated_TableStrokeArchive *x8; struct Deprecated_TableStrokeArchive *x9; struct Deprecated_TableStrokeArchive *x10; struct Deprecated_TableStrokeArchive *x11; struct Deprecated_TableStrokeArchive *x12; struct Deprecated_TableStrokeArchive *x13; struct Deprecated_TableStrokeArchive *x14; struct Deprecated_TableStrokeArchive *x15; struct Deprecated_TableStrokeArchive *x16; struct Deprecated_TableStrokeArchive *x17; struct Deprecated_TableStrokeArchive *x18; struct Deprecated_TableStrokeArchive *x19; struct Deprecated_TableStrokeArchive *x20; struct Deprecated_TableStrokeArchive *x21; struct StrokePresetListArchive *x22; struct StrokeArchive *x23; struct StrokeArchive *x24; struct StrokeArchive *x25; struct StrokeArchive *x26; struct StrokeArchive *x27; struct StrokeArchive *x28; struct StrokeArchive *x29; struct StrokeArchive *x30; struct StrokeArchive *x31; struct StrokeArchive *x32; struct StrokeArchive *x33; struct StrokeArchive *x34; struct StrokeArchive *x35; struct StrokeArchive *x36; struct StrokeArchive *x37; struct StrokeArchive *x38; struct StrokeArchive *x39; struct StrokeArchive *x40; struct StrokeArchive *x41; struct StrokeArchive *x42; struct StrokeArchive *x43; struct StrokeArchive *x44; struct StrokeArchive *x45; struct StrokeArchive *x46; struct StrokeArchive *x47; struct StrokeArchive *x48; struct StrokeArchive *x49; struct StrokeArchive *x50; struct StrokeArchive *x51; struct StrokeArchive *x52; struct StrokeArchive *x53; struct StrokeArchive *x54; struct StrokeArchive *x55; struct StrokeArchive *x56; struct StrokeArchive *x57; struct StrokeArchive *x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; BOOL x63; BOOL x64; BOOL x65; BOOL x66; int x67; BOOL x68; BOOL x69; BOOL x70; BOOL x71; BOOL x72; int x73; } *)a1 unarchiver:(id)a2;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<3> { unsigned int x0[3]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct FillArchive *x5; struct Deprecated_TableStrokeArchive *x6; struct Deprecated_TableStrokeArchive *x7; struct Deprecated_TableStrokeArchive *x8; struct Deprecated_TableStrokeArchive *x9; struct Deprecated_TableStrokeArchive *x10; struct Deprecated_TableStrokeArchive *x11; struct Deprecated_TableStrokeArchive *x12; struct Deprecated_TableStrokeArchive *x13; struct Deprecated_TableStrokeArchive *x14; struct Deprecated_TableStrokeArchive *x15; struct Deprecated_TableStrokeArchive *x16; struct Deprecated_TableStrokeArchive *x17; struct Deprecated_TableStrokeArchive *x18; struct Deprecated_TableStrokeArchive *x19; struct Deprecated_TableStrokeArchive *x20; struct Deprecated_TableStrokeArchive *x21; struct StrokePresetListArchive *x22; struct StrokeArchive *x23; struct StrokeArchive *x24; struct StrokeArchive *x25; struct StrokeArchive *x26; struct StrokeArchive *x27; struct StrokeArchive *x28; struct StrokeArchive *x29; struct StrokeArchive *x30; struct StrokeArchive *x31; struct StrokeArchive *x32; struct StrokeArchive *x33; struct StrokeArchive *x34; struct StrokeArchive *x35; struct StrokeArchive *x36; struct StrokeArchive *x37; struct StrokeArchive *x38; struct StrokeArchive *x39; struct StrokeArchive *x40; struct StrokeArchive *x41; struct StrokeArchive *x42; struct StrokeArchive *x43; struct StrokeArchive *x44; struct StrokeArchive *x45; struct StrokeArchive *x46; struct StrokeArchive *x47; struct StrokeArchive *x48; struct StrokeArchive *x49; struct StrokeArchive *x50; struct StrokeArchive *x51; struct StrokeArchive *x52; struct StrokeArchive *x53; struct StrokeArchive *x54; struct StrokeArchive *x55; struct StrokeArchive *x56; struct StrokeArchive *x57; struct StrokeArchive *x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; BOOL x63; BOOL x64; BOOL x65; BOOL x66; int x67; BOOL x68; BOOL x69; BOOL x70; BOOL x71; BOOL x72; int x73; } *)a0 archiver:(id)a1;

@end
