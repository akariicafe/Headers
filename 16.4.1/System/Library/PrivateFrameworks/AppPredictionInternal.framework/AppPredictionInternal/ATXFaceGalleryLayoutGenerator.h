@class NSArray, ATXFaceGalleryConfiguration, NSDictionary, NSLocale;
@protocol ATXFaceSuggestionParameters, ATXFaceGalleryLayoutGeneratorComplicationProviding, ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding;

@interface ATXFaceGalleryLayoutGenerator : NSObject {
    id<ATXFaceGalleryLayoutGeneratorComplicationProviding> _complicationProvider;
    id<ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> _complicationDescriptorProvider;
    id<ATXFaceSuggestionParameters> _parameters;
    BOOL _dayZero;
    NSArray *_allHeroDescriptors;
    NSArray *_allNonHeroDescriptors;
    NSDictionary *_nonHeroDescriptorsByExtensionBundleId;
    NSLocale *_locale;
}

@property (readonly, copy, nonatomic) ATXFaceGalleryConfiguration *generatedConfiguration;
@property (readonly, copy, nonatomic) NSArray *candidateFeaturedDescriptors;
@property (readonly, copy, nonatomic) NSArray *rankedFeaturedDescriptors;

+ (id)_descriptorsByDeduplicatingExtensionsInDescriptors:(id)a0;

- (id)_generatedFeaturedPhotosSectionGivenFeaturedSection:(id)a0;
- (BOOL)_descriptorIsEligibleForComplications:(id)a0;
- (id)_generatedFocusSection;
- (id)_shuffledSuggestableComplicationSets;
- (id)_candidateFeaturedDescriptors;
- (id)_generatedPhotoShuffleSection;
- (id)initWithDescriptors:(id)a0 complicationProvider:(id)a1 complicationDescriptorProvider:(id)a2 parameters:(id)a3 dayZero:(BOOL)a4 locale:(id)a5;
- (id)_generateProviderSectionForExtensionBundleIdentifiers:(id)a0;
- (BOOL)_isFocusUser;
- (id)_inlineComplicationForDescriptor:(id)a0;
- (id)_provisionalLocalizedSubtitleTextWithSemanticType:(long long)a0 extensionBundleIdentifiers:(id)a1;
- (id)_generatedHeroSection;
- (void)_processDescriptors:(id)a0;
- (BOOL)_complicationExistsOnSystem:(id)a0;
- (id)_itemsFromDescriptors:(id)a0 shouldShowDisplayName:(BOOL)a1 shouldShowComplications:(BOOL)a2 limit:(id)a3;
- (id)_modularComplicationsForDescriptor:(id)a0 systemSuggestionComplications:(id)a1;
- (void).cxx_destruct;
- (id)_itemFromDescriptor:(id)a0 shouldShowDisplayName:(BOOL)a1 shouldShowComplications:(BOOL)a2 systemSuggestedComplicationSet:(id)a3;
- (id)_generatedFeaturedSection;

@end
