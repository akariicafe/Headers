@class ATXPosterDescriptorCache, NSArray, NSDictionary, NSSet, NSString, NSLocale;

@interface ATXFaceSuggestionAssetParameters : NSObject <ATXFaceSuggestionParameters> {
    ATXPosterDescriptorCache *_descriptorCache;
    NSString *_path;
    NSLocale *_locale;
}

@property (readonly, copy) NSDictionary *topLevelDictionary;
@property (readonly, copy, nonatomic) NSArray *sectionOrder;
@property (readonly, copy, nonatomic) NSArray *heroSectionOrder;
@property (readonly, copy, nonatomic) NSArray *dayZeroFeaturedDescriptors;
@property (readonly, copy, nonatomic) NSSet *extensionBundleIdsEligibleForComplicationsInFaceGallery;
@property (readonly, copy, nonatomic) NSDictionary *uprankedDateIntervals;
@property (readonly, copy, nonatomic) NSDictionary *globalPopularityScores;
@property (readonly, copy, nonatomic) NSDictionary *unpromotableRegions;
@property (readonly, copy, nonatomic) NSDictionary *hiddenRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_loadAssetParametersDictionaryFromPath:(id)a0;

- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (id)_posterDescriptorFromKey:(id)a0;
- (id)init;
- (id)_currentCountryCode;
- (void).cxx_destruct;

@end
