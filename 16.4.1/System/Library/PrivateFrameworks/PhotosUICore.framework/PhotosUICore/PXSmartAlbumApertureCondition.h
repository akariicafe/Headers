@class NSArray, PXLabeledValue;

@interface PXSmartAlbumApertureCondition : PXSmartAlbumEXIFCondition {
    NSArray *_apertureValues;
}

@property (readonly, nonatomic) NSArray *apertureValues;
@property (retain, nonatomic) PXLabeledValue *apertureValue;
@property (retain, nonatomic) PXLabeledValue *secondApertureValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
