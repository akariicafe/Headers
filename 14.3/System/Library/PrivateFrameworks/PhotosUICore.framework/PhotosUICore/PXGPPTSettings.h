@class NSArray;

@interface PXGPPTSettings : PXSettings

@property (class, readonly, nonatomic) NSArray *allPresetNames;
@property (class, readonly, nonatomic) NSArray *scrollingPresetNames;

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long numberOfSections;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) BOOL useAssetBadgeDecoration;
@property (nonatomic) long long selectionDecorationStlye;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (id)createLayout;
- (void)setDefaultValues;
- (void)setDefaultValuesWithPresetName:(id)a0;

@end
