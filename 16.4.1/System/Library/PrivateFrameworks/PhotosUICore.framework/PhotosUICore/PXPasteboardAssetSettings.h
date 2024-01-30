@interface PXPasteboardAssetSettings : PXSettings

@property (nonatomic) BOOL fileURLEnabled;
@property (nonatomic) BOOL imageDataEnabled;
@property (nonatomic) BOOL alwaysUseDataProviderForObjectReference;
@property (nonatomic) BOOL synchronousFullSizePreviewEnabled;

+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;

@end
