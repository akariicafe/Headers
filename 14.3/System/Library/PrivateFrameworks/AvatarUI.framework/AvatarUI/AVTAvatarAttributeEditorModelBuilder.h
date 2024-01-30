@interface AVTAvatarAttributeEditorModelBuilder : NSObject

+ (id)selectedModelPresetForSelectedPreset:(id)a0 inPresetsList:(id)a1;
+ (id)filterPresets:(id)a0 forRowRepresentingTags:(id)a1 currentTagSelection:(id)a2 fixedTags:(id)a3 availableTags:(id)a4 sortingOption:(unsigned long long)a5;
+ (id)sectionForModelColorsRow:(id)a0 configuration:(id)a1 imageProvider:(id)a2 colorLayerProvider:(id)a3 colorVariationStore:(id)a4 pairedCategory:(long long)a5 destination:(long long)a6 editingColors:(id)a7;
+ (int)scoreForTags:(id)a0 forCombination:(id)a1 currentSelection:(id)a2;
+ (id)filterPresets:(id)a0 matchingTagValues:(id)a1 sortedUsing:(unsigned long long)a2;
+ (id)sectionForModelRow:(id)a0 fromModelPresets:(id)a1 selectedModelPreset:(id)a2 tagSelection:(id)a3 fixedTags:(id)a4 availableTags:(id)a5 imageProvider:(id)a6 configuration:(id)a7 previousSection:(id)a8 pairedCategory:(long long)a9;
+ (id)tagSetForTagNames:(id)a0 inTagSet:(id)a1;
+ (void)setTags:(id)a0 onMutableTagSet:(id)a1;
+ (id)firstColorSectionInSections:(id)a0;
+ (id)sectionColorItemsForColors:(id)a0 selectedPreset:(id)a1 configuration:(id)a2 imageProvider:(id)a3 colorLayerProvider:(id)a4 colorVariationStore:(id)a5 pairedCategory:(long long)a6 editingColors:(id)a7;
+ (id)sectionOptionFromModelOptions:(id)a0;
+ (id)framingModeForRow:(id)a0 selectedPreset:(id)a1;
+ (id)tagCombinationsForTagNames:(id)a0 availableTags:(id)a1;
+ (void)addTags:(id)a0 toMutableTagSet:(id)a1;
+ (void)insertPreset:(id)a0 intoList:(id)a1 forSortingOption:(unsigned long long)a2;
+ (unsigned long long)sectionDisplayModeForCoreModelDisplayMode:(unsigned long long)a0;
+ (id)tagSetByRemovingTagNames:(id)a0 fromTagSet:(id)a1;
+ (id)buildDataSourceCategoriesFromCoreModel:(id)a0 selectingFromAvatarConfiguration:(id)a1 imageProvider:(id)a2 colorLayerProvider:(id)a3 modelManager:(id)a4 withSelectedCategory:(id)a5 atIndex:(unsigned long long)a6;

@end
