@class NSArray;

@interface PXGPPTSettings : PXSettings

@property (class, readonly, nonatomic) NSArray *allPresetNames;
@property (class, readonly, nonatomic) NSArray *scrollingPresetNames;

@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long numberOfSections;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) BOOL useAssetBadgeDecoration;
@property (nonatomic) long long selectionDecorationStlye;
@property (nonatomic) BOOL useMultipleScrollableRows;
@property (nonatomic) BOOL shouldTestNestedScrollView;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (id)createLayout;
- (void)setDefaultValuesWithPresetName:(id)a0;

@end
