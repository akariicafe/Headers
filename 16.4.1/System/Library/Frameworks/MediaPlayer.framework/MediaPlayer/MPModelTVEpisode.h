@class MPModelFileAsset, NSString, MPModelTVSeason, MPModelTVShow, NSDate, MPModelStoreAsset, MPModelPlaybackPosition;

@interface MPModelTVEpisode : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic, getter=isMusicShow) BOOL musicShow;
@property (nonatomic) long long episodeNumber;
@property (retain, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, nonatomic) MPModelStoreAsset *storeAsset;
@property (retain, nonatomic) MPModelTVSeason *season;
@property (retain, nonatomic) MPModelTVShow *show;
@property (nonatomic) long long explicitRating;
@property (nonatomic) BOOL hasCloudSyncSource;
@property (copy, nonatomic) NSDate *releaseDate;
@property (nonatomic) long long episodeType;
@property (copy, nonatomic) NSString *episodeTypeDisplayName;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic) unsigned long long keepLocalManagedStatusReason;
@property (nonatomic) unsigned long long keepLocalConstraints;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (readonly, copy, nonatomic) NSDate *lastDevicePlaybackDate;

+ (long long)genericObjectType;
+ (id)__descriptionText_KEY;
+ (id)__show_KEY;
+ (id)kindWithVariants:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)__season_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__musicShow_KEY;
+ (id)__downloadedDate_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeTypeDisplayName_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitRating_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__keepLocalConstraints_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatusReason_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__releaseDate_KEY;
+ (id)__storeAsset_KEY;
+ (id)__title_KEY;
+ (id)kindWithVariants:(unsigned long long)a0;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (BOOL)supportsLibraryRemoval;

- (id)humanDescription;
- (id)artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
