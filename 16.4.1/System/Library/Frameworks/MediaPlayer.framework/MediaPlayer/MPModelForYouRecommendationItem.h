@class NSString, MPModelAlbum, NSURL, MPModelPlaylist, MPModelRadioStation, MPModelForYouRecommendationGroup;

@interface MPModelForYouRecommendationItem : MPModelObject

@property (nonatomic) unsigned long long itemType;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *utterance;
@property (retain, nonatomic) MPModelAlbum *album;
@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (weak, nonatomic) MPModelForYouRecommendationGroup *parentGroup;
@property (nonatomic) long long subgroupIndex;
@property (nonatomic, getter=isBackedByStoreItemMetadata) BOOL backedByStoreItemMetadata;
@property (readonly, nonatomic) MPModelForYouRecommendationGroup *subgroup;

+ (id)__radioStation_KEY;
+ (id)__playlist_KEY;
+ (id)__album_KEY;
+ (id)__itemType_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)__backedByStoreItemMetadata_KEY;
+ (id)__utterance_KEY;
+ (id)__parentGroup_KEY;
+ (id)__reason_KEY;
+ (id)__subgroupIndex_KEY;
+ (id)__url_KEY;

- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)a0;
- (id)personalizationScopedPropertiesForProperties:(id)a0;
- (id)relativeModelObjectForStoreLibraryPersonalization;

@end
