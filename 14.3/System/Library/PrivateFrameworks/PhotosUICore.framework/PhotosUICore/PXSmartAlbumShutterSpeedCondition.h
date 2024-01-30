@class NSArray, PXLabeledValue;

@interface PXSmartAlbumShutterSpeedCondition : PXSmartAlbumEXIFCondition {
    NSArray *_shutterSpeedValues;
}

@property (readonly, nonatomic) NSArray *shutterSpeedValues;
@property (retain, nonatomic) PXLabeledValue *shutterSpeedValue;
@property (retain, nonatomic) PXLabeledValue *secondShutterSpeedValue;

+ (id)defaultSingleQueryForEditingContext:(id)a0;
+ (id)formatter;

- (void).cxx_destruct;

@end
