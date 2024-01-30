@class NSArray, PXLabeledValue;

@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition {
    NSArray *_albumValues;
}

@property (class, readonly) PXLabeledValue *anyAlbumValue;

@property (retain, nonatomic) PXLabeledValue *albumValue;
@property (readonly, nonatomic) BOOL albumValueIsOrphaned;

+ (id)defaultSingleQueryForEditingContext:(id)a0;

- (void).cxx_destruct;
- (id)_albumValues;

@end
