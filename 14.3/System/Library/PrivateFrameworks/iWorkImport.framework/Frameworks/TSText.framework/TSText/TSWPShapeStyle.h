@class NSString, TSWPParagraphStyle;

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>

@property (class, readonly) NSString *presetStyleDescriptor;

@property (retain, nonatomic) TSWPParagraphStyle *defaultParagraphStyle;
@property (readonly, nonatomic) NSString *presetKind;

+ (id)properties;
+ (id)defaultValueForProperty:(int)a0;
+ (int)defaultIntValueForProperty:(int)a0;
+ (id)propertiesAllowingNSNull;
+ (id)layoutProperties;
+ (void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)a0 fromArchive:(const struct ShapeStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ColumnsArchive *x4; struct PaddingArchive *x5; struct Reference *x6; int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned int x12; BOOL x13; BOOL x14; } *)a1 unarchiver:(id)a2;
+ (void)saveShapeStyleLayoutPropertyMap:(id)a0 toArchive:(struct ShapeStylePropertiesArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ColumnsArchive *x4; struct PaddingArchive *x5; struct Reference *x6; int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; unsigned int x12; BOOL x13; BOOL x14; } *)a1 archiver:(id)a2;

- (id)boxedValueForProperty:(int)a0 oldBoxedValue:(id)a1 transformedByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (void)saveToArchive:(struct ShapeStyleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ShapeStyleArchive *x4; struct ShapeStylePropertiesArchive *x5; unsigned int x6; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)archivableRepresentationOfChangeSet:(id)a0;

@end
