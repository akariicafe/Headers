@class TSCHStyleOwnerReference, TSPObject, NSUUID, TSCHStyleSemanticTag, TSSPropertySet, TSSStyle, TSSPropertyMap;
@protocol TSCHStyleSwapSupporting;

@interface TSCHStyleSwapUndoTuple : NSObject {
    int mIndex;
    TSSPropertySet *mMutatedProperties;
}

@property (readonly, retain, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting;
@property (readonly) TSSStyle *beforeValue;
@property (readonly) TSSStyle *afterValue;
@property (readonly) int swapType;
@property (readonly) unsigned long long index;
@property (readonly) TSSPropertySet *mutatedProperties;
@property (readonly) NSUUID *refLineUUID;
@property (readonly) TSCHStyleOwnerReference *styleOwnerReference;
@property (readonly) TSCHStyleSemanticTag *semanticTag;
@property (readonly) TSSPropertyMap *forwardDelta;
@property (readonly) TSSPropertyMap *reverseDelta;

+ (id)migratedSwapTuplesForSwapTuples:(id)a0 documentRoot:(id)a1;
+ (BOOL)hasSwapTuplesRequiringConversion:(id)a0;
+ (id)convertedSwapTuplesForSwapTuples:(id)a0 chartInfo:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)inverse;
- (id)initWithArchive:(const struct StyleSwapUndoTupleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct Reference *x6; struct UUID *x7; unsigned int x8; int x9; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct StyleSwapUndoTupleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct Reference *x6; struct UUID *x7; unsigned int x8; int x9; } *)a0 archiver:(id)a1;
- (id)initWithChartInfo:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4;
- (id)initWithChartInfo:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 refLineUUID:(id)a5;
- (id)migratedSwapTupleForDocumentRoot:(id)a0;
- (id)convertedSwapTupleForChartInfo:(id)a0;
- (id)p_initWithPersistentStyleSwapSupporting:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 refLineUUID:(id)a5;
- (id)p_deltaFrom:(id)a0 to:(id)a1;
- (id)migratedStyleForStyle:(id)a0 documentRoot:(id)a1;
- (id)initWithChartStylePreset:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4;
- (id)initFromSOSWithSwapType:(int)a0 index:(unsigned long long)a1 oldValue:(id)a2 newValue:(id)a3 refLineUUID:(id)a4;
- (BOOL)isSwappingSameStyleObject:(id)a0;
- (BOOL)isSwappingSameStyleValues:(id)a0;
- (id)p_nonequalPropertiesFromMap:(id)a0 toMap:(id)a1;
- (BOOL)canApplyTupleToStyleSwapSupporting:(id)a0;

@end
