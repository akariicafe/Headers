@class TSCHStyleOwnerReference, TSPObject, NSUUID, TSCHStyleSemanticTag, TSSPropertySet, TSSStyle;
@protocol TSCHStyleSwapSupporting;

@interface TSCHStyleSwapUndoTuple : NSObject {
    int _index;
    TSSPropertySet *_mutatedProperties;
}

@property (readonly, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting;
@property (readonly, nonatomic) TSSStyle *beforeValue;
@property (readonly, nonatomic) TSSStyle *afterValue;
@property (readonly, nonatomic) int swapType;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) TSSPropertySet *mutatedProperties;
@property (readonly, nonatomic) NSUUID *refLineUUID;
@property (readonly, nonatomic) TSCHStyleOwnerReference *styleOwnerReference;
@property (readonly, nonatomic) TSCHStyleSemanticTag *semanticTag;

+ (id)convertedSwapTuplesForSwapTuples:(id)a0 chartInfo:(id)a1;
+ (BOOL)hasSwapTuplesRequiringConversion:(id)a0;

- (id)inverse;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)convertedSwapTupleForChartInfo:(id)a0;
- (id)initWithChartInfo:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 refLineUUID:(id)a5;
- (BOOL)canApplyTupleToStyleSwapSupporting:(id)a0;
- (id)initFromSOSWithSwapType:(int)a0 index:(unsigned long long)a1 oldValue:(id)a2 newValue:(id)a3 refLineUUID:(id)a4;
- (id)initWithChartInfo:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4;
- (id)initWithChartStylePreset:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4;
- (id)initWithPersistentStyleSwapSupporting:(id)a0 swapType:(int)a1 index:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 refLineUUID:(id)a5;
- (BOOL)isSwappingSameStyleObject:(id)a0;
- (BOOL)isSwappingSameStyleValues:(id)a0;
- (id)migratedStyleForStyle:(id)a0 documentRoot:(id)a1;
- (id)migratedSwapTupleForDocumentRoot:(id)a0;
- (id)p_nonequalPropertiesFromMap:(id)a0 toMap:(id)a1;

@end
