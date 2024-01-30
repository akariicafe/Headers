@class NSString, MPModelTVShow, NSDate, MPModelTVEpisode;

@interface MPModelTVSeason : MPModelObject

@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) long long year;
@property (nonatomic) long long episodesCount;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic) long long sortType;
@property (retain, nonatomic) MPModelTVShow *show;
@property (retain, nonatomic) MPModelTVEpisode *representativeEpisode;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;

+ (long long)genericObjectType;
+ (id)__descriptionText_KEY;
+ (id)__show_KEY;
+ (id)kindWithEpisodeKind:(id)a0;
+ (id)__artworkCatalogBlock_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__downloadedDate_KEY;
+ (id)__episodesCount_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__number_KEY;
+ (id)__representativeEpisode_KEY;
+ (id)__sortType_KEY;
+ (id)__year_KEY;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (BOOL)supportsLibraryAddStatusObservation;

- (id)humanDescription;
- (id)artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
