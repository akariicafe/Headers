@class NSArray, PXLabeledValue;

@interface PXSmartAlbumPhotoCondition : PXSmartAlbumCondition {
    NSArray *_photoTypeValues;
}

@property (readonly, nonatomic) NSArray *photoTypeValues;
@property (retain, nonatomic) PXLabeledValue *photoTypeValue;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
