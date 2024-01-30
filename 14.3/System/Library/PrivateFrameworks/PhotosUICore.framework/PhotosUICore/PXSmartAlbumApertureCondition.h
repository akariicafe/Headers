@class NSArray, PXLabeledValue;

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition {
    NSArray *_apertureValues;
}

@property (readonly, nonatomic) NSArray *apertureValues;
@property (retain, nonatomic) PXLabeledValue *apertureValue;
@property (retain, nonatomic) PXLabeledValue *secondApertureValue;

+ (id)defaultSingleQueryForEditingContext:(id)a0;
+ (id)formatter;

- (void).cxx_destruct;

@end
