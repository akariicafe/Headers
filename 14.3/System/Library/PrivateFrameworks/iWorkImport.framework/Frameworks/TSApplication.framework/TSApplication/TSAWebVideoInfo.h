@class TSDAttribution, NSString, NSURL, TSPData, TSSStyle, TSDMediaStyle;

@interface TSAWebVideoInfo : TSDDrawableInfo <TSDFittingOnInsertion, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDStyleOwning, TSSStyleClient> {
    TSDMediaStyle *_style;
    NSString *_URLString;
    BOOL _definedPosterImageData;
    BOOL _definedAttribution;
    struct CGSize { double width; double height; } _archivedImageNaturalSize;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) TSPData *posterImageData;
@property (copy, nonatomic) TSDAttribution *attribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) Class styleClass;

+ (id)p_defaultArchivedImageStyleWithContext:(id)a0;
+ (Class)drawableInfoSubclassForClass:(Class)a0 unarchiver:(id)a1;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (unsigned int)elementKind;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
- (void)acceptVisitor:(id)a0;
- (BOOL)allowsTitle;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id /* block */)a0;
- (BOOL)supportsHyperlinks;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (id)animationFilters;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)supportsParentRotation;
- (void)didInitFromSOS;
- (void)loadFromArchive:(const struct ImageArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct DrawableArchive *x5; struct Reference *x6; struct Reference *x7; struct Size *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct Size *x12; struct Path *x13; struct DataReference *x14; struct DataReference *x15; struct DataReference *x16; struct ImageAdjustmentsArchive *x17; struct DataReference *x18; struct DataReference *x19; struct DataReference *x20; struct Path *x21; struct Attribution *x22; unsigned int x23; BOOL x24; BOOL x25; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ImageArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct DrawableArchive *x5; struct Reference *x6; struct Reference *x7; struct Size *x8; struct Reference *x9; struct Reference *x10; struct Reference *x11; struct Size *x12; struct Path *x13; struct DataReference *x14; struct DataReference *x15; struct DataReference *x16; struct ImageAdjustmentsArchive *x17; struct DataReference *x18; struct DataReference *x19; struct DataReference *x20; struct Path *x21; struct Attribution *x22; unsigned int x23; BOOL x24; BOOL x25; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 URL:(id)a3 posterImageData:(id)a4;
- (void)takeGeometryFromReplacedWebVideoInfo:(id)a0;
- (BOOL)allowsCaption;
- (id)p_attributedStringRepresentation;
- (id)initWithContext:(id)a0 geometry:(id)a1 URL:(id)a2 posterImageData:(id)a3;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
- (void)takePropertiesFromReplacedWebVideoInfo:(id)a0;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (BOOL)wantsStandardTypesInAdditionToTypesToPromiseWhenDraggingSingleDrawable;
- (id)promisedDataForType:(id)a0;

@end
