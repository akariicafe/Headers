@class NSArray, PXLabeledValue;

@interface PXSmartAlbumISOCondition : PXSmartAlbumEXIFCondition {
    NSArray *_ISOValues;
}

@property (readonly, nonatomic) NSArray *ISOValues;
@property (retain, nonatomic) PXLabeledValue *ISOValue;
@property (retain, nonatomic) PXLabeledValue *secondISOValue;

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;

@end
