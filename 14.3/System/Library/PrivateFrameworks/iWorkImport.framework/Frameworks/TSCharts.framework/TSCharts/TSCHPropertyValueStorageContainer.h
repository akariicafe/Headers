@class NSArray, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol TSCHStyleActAlike;

@interface TSCHPropertyValueStorageContainer : NSObject

@property (retain, nonatomic, setter=p_setChartStyle:) id<TSCHStyleActAlike> p_chartStyle;
@property (retain, nonatomic, setter=p_setChartNonStyle:) id<TSCHStyleActAlike> p_chartNonStyle;
@property (retain, nonatomic, setter=p_setLegendStyle:) id<TSCHStyleActAlike> p_legendStyle;
@property (retain, nonatomic, setter=p_setLegendNonStyle:) id<TSCHStyleActAlike> p_legendNonStyle;
@property (retain, nonatomic, setter=p_setMutableValueAxisStyles:) NSMutableArray *p_mutableValueAxisStyles;
@property (retain, nonatomic, setter=p_setMutableValueAxisNonStyles:) NSMutableArray *p_mutableValueAxisNonStyles;
@property (retain, nonatomic, setter=p_setMutableCategoryAxisStyles:) NSMutableArray *p_mutableCategoryAxisStyles;
@property (retain, nonatomic, setter=p_setMutableCategoryAxisNonStyles:) NSMutableArray *p_mutableCategoryAxisNonStyles;
@property (retain, nonatomic, setter=p_setMutableSeriesThemeStyles:) NSMutableArray *p_mutableSeriesThemeStyles;
@property (retain, nonatomic, setter=p_setMutableSeriesPrivateStyles:) NSMutableArray *p_mutableSeriesPrivateStyles;
@property (retain, nonatomic, setter=p_setMutableSeriesNonStyles:) NSMutableArray *p_mutableSeriesNonStyles;
@property (retain, nonatomic, setter=p_setMutableParagraphStyles:) NSMutableArray *p_mutableParagraphStyles;
@property (retain, nonatomic, setter=p_setMutableRefLineStyles:) NSMutableDictionary *p_mutableRefLineStyles;
@property (retain, nonatomic, setter=p_setMutableRefLineNonStyles:) NSMutableDictionary *p_mutableRefLineNonStyles;
@property (copy, nonatomic, setter=p_setValueAxisStyles:) NSArray *p_valueAxisStyles;
@property (copy, nonatomic, setter=p_setValueAxisNonStyles:) NSArray *p_valueAxisNonStyles;
@property (copy, nonatomic, setter=p_setCategoryAxisStyles:) NSArray *p_categoryAxisStyles;
@property (copy, nonatomic, setter=p_setCategoryAxisNonStyles:) NSArray *p_categoryAxisNonStyles;
@property (copy, nonatomic, setter=p_setSeriesThemeStyles:) NSArray *p_seriesThemeStyles;
@property (copy, nonatomic, setter=p_setSeriesPrivateStyles:) NSArray *p_seriesPrivateStyles;
@property (copy, nonatomic, setter=p_setSeriesNonStyles:) NSArray *p_seriesNonStyles;
@property (copy, nonatomic, setter=p_setParagraphStyles:) NSArray *p_paragraphStyles;
@property (retain, nonatomic, setter=p_setReferenceLineThemeStyle:) id<TSCHStyleActAlike> p_referenceLineThemeStyle;
@property (copy, nonatomic, setter=p_setReferenceLineStyles:) NSDictionary *p_referenceLineStyles;
@property (copy, nonatomic, setter=p_setReferenceLineNonStyles:) NSDictionary *p_referenceLineNonStyles;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void).cxx_destruct;
- (void)loadFromArchive:(const struct PropertyValueStorageContainerArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Reference *x5; struct Reference *x6; struct Reference *x7; struct Reference *x8; struct SparseReferenceArray *x9; struct SparseReferenceArray *x10; struct SparseReferenceArray *x11; struct SparseReferenceArray *x12; struct SparseReferenceArray *x13; struct SparseReferenceArray *x14; struct SparseReferenceArray *x15; struct SparseReferenceArray *x16; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct PropertyValueStorageContainerArchive { void /* function */ **x0; struct ExtensionSet { struct Arena *x0; unsigned short x1; unsigned short x2; union AllocatedData { struct KeyValue *x0; struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > *x1; } x3; } x1; struct InternalMetadataWithArena { void *x0; } x2; struct HasBits<1> { unsigned int x0[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x4; struct Reference *x5; struct Reference *x6; struct Reference *x7; struct Reference *x8; struct SparseReferenceArray *x9; struct SparseReferenceArray *x10; struct SparseReferenceArray *x11; struct SparseReferenceArray *x12; struct SparseReferenceArray *x13; struct SparseReferenceArray *x14; struct SparseReferenceArray *x15; struct SparseReferenceArray *x16; } *)a0 archiver:(id)a1;

@end
