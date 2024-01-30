@interface AVTAvatarAttributeEditorModelBuilder : NSObject

+ (void)addTags:(id)a0 toMutableTagSet:(id)a1;
+ (id)buildDataSourceCategoriesFromCoreModel:(id)a0 selectingFromAvatarConfiguration:(id)a1 imageProvider:(id)a2 colorLayerProvider:(id)a3 stickerRenderer:(id)a4 modelManager:(id)a5 withSelectedCategory:(id)a6 atIndex:(unsigned long long)a7;
+ (unsigned long long)destinationForPresetCategory:(long long)a0 isPaired:(BOOL)a1;
+ (id)filterPresets:(id)a0 forRowRepresentingTags:(id)a1 currentTagSelection:(id)a2 fixedTags:(id)a3 availableTags:(id)a4 sortingOption:(unsigned long long)a5;
+ (id)filterPresets:(id)a0 matchingTagValues:(id)a1 sortedUsing:(unsigned long long)a2;
+ (id)firstColorSectionInSections:(id)a0;
+ (id)framingModeForRow:(id)a0 selectedPreset:(id)a1;
+ (void)insertPreset:(id)a0 intoList:(id)a1 forSortingOption:(unsigned long long)a2;
+ (id)multicolorSectionProviderForCoreMulticolorPicker:(id)a0 platform:(unsigned long long)a1 configuration:(id)a2 imageProvider:(id)a3 colorLayerProvider:(id)a4 editingColors:(id)a5 colorDefaultsProvider:(id)a6 modelManager:(id)a7 previousSectionMap:(id)a8 pairingPickers:(id)a9;
+ (id)previewModeForCoreModelGroup:(id)a0;
+ (int)scoreForTags:(id)a0 forCombination:(id)a1 currentSelection:(id)a2;
+ (id)sectionColorItemsForColors:(id)a0 selectedPreset:(id)a1 configuration:(id)a2 modelManager:(id)a3 additionalUpdateKind:(struct { long long x0; long long x1; })a4 imageProvider:(id)a5 colorLayerProvider:(id)a6 pairedCategory:(long long)a7 editingColors:(id)a8;
+ (unsigned long long)sectionDisplayModeForCoreModelDisplayMode:(unsigned long long)a0;
+ (id)sectionForModelColorsRow:(id)a0 configuration:(id)a1 modelManager:(id)a2 imageProvider:(id)a3 colorLayerProvider:(id)a4 pairedCategory:(long long)a5 destination:(long long)a6 editingColors:(id)a7 displaysTitle:(BOOL)a8;
+ (id)sectionForModelColorsRow:(id)a0 selectedColorPreset:(id)a1 configuration:(id)a2 modelManager:(id)a3 additionalAvatarUpdateKind:(struct { long long x0; long long x1; })a4 imageProvider:(id)a5 colorLayerProvider:(id)a6 pairedCategory:(long long)a7 destination:(long long)a8 editingColors:(id)a9 displaysTitle:(BOOL)a10;
+ (id)sectionForModelRow:(id)a0 fromModelPresets:(id)a1 selectedModelPreset:(id)a2 tagSelection:(id)a3 fixedTags:(id)a4 availableTags:(id)a5 category:(long long)a6 imageProvider:(id)a7 stickerRenderer:(id)a8 configuration:(id)a9 previousSection:(id)a10 pairedCategory:(long long)a11;
+ (id)sectionOptionFromModelOptions:(id)a0;
+ (id)sectionProvidersForCoreModelCategory:(id)a0 platform:(unsigned long long)a1 modelManager:(id)a2 pairingPickers:(id)a3 editingColors:(id)a4 colorDefaultsProvider:(id)a5 previousSectionMap:(id)a6 imageProvider:(id)a7 colorLayerProvider:(id)a8 stickerRenderer:(id)a9 configuration:(id)a10 displayConditionEvaluator:(id /* block */)a11;
+ (id)selectedModelPresetForSelectedPreset:(id)a0 inPresetsList:(id)a1;
+ (id)selectedPresetForCoreModelColorsPicker:(id)a0 isEnabled:(BOOL)a1 fallbackToColorsPicker:(id)a2 colorDefaultsProvider:(id)a3 modelManager:(id)a4;
+ (void)setTags:(id)a0 onMutableTagSet:(id)a1;
+ (id)subtitleFromSubtitles:(id)a0 forIndex:(long long)a1 enabledIndex:(long long)a2;
+ (id)tagCombinationsForTagNames:(id)a0 availableTags:(id)a1;
+ (id)tagSetByRemovingTagNames:(id)a0 fromTagSet:(id)a1;
+ (id)tagSetForTagNames:(id)a0 inTagSet:(id)a1;

@end
