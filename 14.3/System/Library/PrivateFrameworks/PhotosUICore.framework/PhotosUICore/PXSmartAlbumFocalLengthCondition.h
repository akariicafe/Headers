@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition {
    NSArray *_focalLengthValues;
}

@property (readonly, nonatomic) NSArray *focalLengthValues;
@property (retain, nonatomic) PXLabeledValue *focalLengthValue;
@property (retain, nonatomic) PXLabeledValue *secondFocalLengthValue;

+ (id)defaultSingleQueryForEditingContext:(id)a0;
+ (id)formatter;

- (void).cxx_destruct;

@end
