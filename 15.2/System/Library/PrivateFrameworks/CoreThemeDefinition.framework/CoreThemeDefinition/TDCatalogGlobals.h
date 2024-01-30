@interface TDCatalogGlobals : NSManagedObject {
    unsigned long long _defaultBlendMode;
    BOOL _allowsVibrancy;
    BOOL _supportsWhitePointAdjustments;
    BOOL _supportsBrightnessAdjustments;
    BOOL _allowsSystemTintColors;
    BOOL _allowsCustomTintColors;
    BOOL _supportsMultipleAppearancesForEffects;
}

@property (nonatomic) unsigned long long defaultBlendMode;
@property (nonatomic) BOOL allowsVibrancy;
@property (nonatomic) BOOL supportsWhitePointAdjustments;
@property (nonatomic) BOOL supportsBrightnessAdjustments;
@property (nonatomic) BOOL allowsSystemTintColors;
@property (nonatomic) BOOL allowsCustomTintColors;
@property (nonatomic) BOOL supportsMultipleAppearancesForEffects;

- (id)dictionaryForArchiving;

@end
