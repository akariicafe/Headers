@class PLSingleQuery, NSArray, PXLabeledValue;
@protocol PXSmartAlbumEditingContext, PXSmartAlbumConditionDelegate;

@interface PXSmartAlbumCondition : NSObject {
    NSArray *_comparatorValues;
}

@property (readonly, nonatomic) long long conditionType;
@property (readonly, nonatomic) id<PXSmartAlbumEditingContext> editingContext;
@property (readonly, nonatomic) PLSingleQuery *singleQuery;
@property (weak, nonatomic) id<PXSmartAlbumConditionDelegate> delegate;
@property (readonly, nonatomic) NSArray *comparatorValues;
@property (retain, nonatomic) PXLabeledValue *comparatorValue;
@property (readonly, nonatomic) long long comparatorParameterType;

+ (id)defaultSingleQueryForEditingContext:(id)a0;
+ (id)conditionWithConditionType:(long long)a0 editingContext:(id)a1;
+ (id)_conditionWithSingleQuery:(id)a0 editingContext:(id)a1;
+ (id)conditionsForQuery:(id)a0 editingContext:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;
- (long long)comparatorMode;
- (id)_initWithConditionType:(long long)a0 singleQuery:(id)a1 editingContext:(id)a2;
- (int)_comparatorType;

@end
