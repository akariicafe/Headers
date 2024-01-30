@class NSString, AVTEditingModelColors, NSData, NSError, AVTUILogger, NSDictionary;

@interface AVTEditingModelDefinitionsParser : NSObject

@property (readonly, nonatomic) unsigned long long platform;
@property (readonly, nonatomic) NSString *platformDictionaryKey;
@property (readonly, nonatomic) AVTUILogger *logger;
@property (readonly, nonatomic) NSData *plistData;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AVTEditingModelColors *colorCache;
@property (retain, nonatomic) NSDictionary *neutralMemojiPresetsIdentifierPerCategory;
@property (retain, nonatomic) NSDictionary *presetPickersDefinitions;
@property (retain, nonatomic) NSDictionary *colorPickersDefinitions;

+ (id)localizedString:(id)a0;
+ (id)dataFromAvatarKit;
+ (id)platformDictionaryKeyForPlatform:(unsigned long long)a0;
+ (id)errorWithDescription:(id)a0 underlyingError:(id)a1;
+ (id)dataFromBundle;
+ (id)sortedModelRows:(id)a0 forPlatform:(unsigned long long)a1;
+ (unsigned long long)defaultSortingOptionForPlatform:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initForPlatform:(unsigned long long)a0 withLogger:(id)a1;
- (void)parseWithCompletionHandler:(id /* block */)a0;
- (id)initWithPlistData:(id)a0 forPlatform:(unsigned long long)a1 logger:(id)a2;
- (id)decodePropertyListObjects:(id)a0;
- (id)parseCoreModelFromGroupsDefinitions:(id)a0;
- (id)coreModelGroupFromGroupDictionary:(id)a0;
- (id)applyPlatformOverrideForDictionary:(id)a0;
- (id)coreModelCategoryFromCategoryDictionary:(id)a0;
- (id)symbolNamesFromGroupDictionary:(id)a0;
- (BOOL)validateForCategoryWithEnumValue:(id)a0 pickers:(id)a1;
- (id)coreModelRowOptionsFromOptionsDictionary:(id)a0;
- (BOOL)validateForColorPicker:(id)a0 colorPaletteCategory:(id)a1 error:(id *)a2;
- (id)coreModelColorsRowForColorPickerDictionary:(id)a0 settingDestination:(long long)a1 inCategory:(long long)a2 defaultOptions:(id)a3;
- (id)coreModelPresetsForCategory:(long long)a0;
- (id)gatherAllTagsFromPresets:(id)a0;
- (id)pairingFromDictionary:(id)a0;
- (id)coreModelRowFromRowDictionary:(id)a0 availableTags:(id)a1 usedTags:(id)a2 defaultOptions:(id)a3;
- (id)coreModelColorsForColorDefinitions:(id)a0 paletteSettingKind:(struct { long long x0; long long x1; })a1;
- (id)coreModelColorsForPaletteSettingKind:(struct { long long x0; long long x1; })a0;
- (id)neutralMemojiPresetIdentifierForCategory:(long long)a0;

@end
