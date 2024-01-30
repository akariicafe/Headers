@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFlashCondition : PXSmartAlbumCondition {
    NSArray *_flashFiredValues;
}

@property (readonly, nonatomic) NSArray *flashFiredValues;
@property (retain, nonatomic) PXLabeledValue *flashFiredValue;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
