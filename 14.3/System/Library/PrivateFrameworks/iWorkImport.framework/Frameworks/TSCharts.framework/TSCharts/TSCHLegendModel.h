@class NSString, TSCHChartInfo;

@interface TSCHLegendModel : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning, TSDMixing, NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLegendFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (nonatomic) struct CGPoint { double x0; double x1; } legendOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } legendSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned char)styleOwnerPathType;

- (id)valueForProperty:(int)a0;
- (id)context;
- (id)model;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)style;
- (id)defaultProperties;
- (void)willModify;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (int)intValueForProperty:(int)a0 defaultValue:(int)a1;
- (id)objectValueForProperty:(int)a0;
- (void)clearParent;
- (float)floatValueForProperty:(int)a0 defaultValue:(float)a1;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)a0;
- (int)defaultPropertyForGeneric:(int)a0;
- (id)p_genericToDefaultPropertyMap;
- (int)specificPropertyForGeneric:(int)a0;
- (BOOL)hasIntValueForProperty:(int)a0 value:(int *)a1;
- (BOOL)hasFloatValueForProperty:(int)a0 value:(float *)a1;
- (BOOL)hasObjectValueForProperty:(int)a0 value:(id *)a1;
- (id)operationPropertyNameFromGenericProperty:(int)a0;
- (id)nonstyle;
- (id)swapTuplesForMutations:(id)a0 forImport:(BOOL)a1;
- (id)swapTuplesForParagraphStyleMutations:(id)a0 forReferencingProperty:(int)a1;
- (void)loadFromPreUFFArchive:(const struct LegendModelArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct RectArchive *x5; struct Reference *x6; struct Reference *x7; } *)a0;
- (void)loadFromUnityArchive:(const struct ChartArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RectArchive *x11; struct Reference *x12; struct ChartGridArchive *x13; struct Reference *x14; struct Reference *x15; struct Reference *x16; struct Reference *x17; struct Reference *x18; struct SparseReferenceArray *x19; struct SparseReferenceArray *x20; struct Reference *x21; int x22; int x23; int x24; BOOL x25; BOOL x26; BOOL x27; unsigned int x28; } *)a0;
- (void)saveToUnityArchive:(struct ChartArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x6; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x7; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x8; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x9; struct RepeatedPtrField<TSP::Reference> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x10; struct RectArchive *x11; struct Reference *x12; struct ChartGridArchive *x13; struct Reference *x14; struct Reference *x15; struct Reference *x16; struct Reference *x17; struct Reference *x18; struct SparseReferenceArray *x19; struct SparseReferenceArray *x20; struct Reference *x21; int x22; int x23; int x24; BOOL x25; BOOL x26; BOOL x27; unsigned int x28; } *)a0;

@end
