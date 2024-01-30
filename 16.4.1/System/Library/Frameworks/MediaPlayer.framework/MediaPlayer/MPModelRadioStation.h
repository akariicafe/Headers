@class NSString, NSArray, NSURL, NSDate, MPRadioStationEvent;

@interface MPModelRadioStation : MPModelObject

@property (nonatomic, getter=isBeats1) BOOL beats1;
@property (nonatomic, getter=isLive) BOOL live;
@property (nonatomic, getter=containsVideo) BOOL containsVideo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic) BOOL hasExplicitContent;
@property (copy, nonatomic) NSArray *stationEvents;
@property (copy, nonatomic) id /* block */ artworkCatalogBlock;
@property (copy, nonatomic) id /* block */ stationGlyphBlock;
@property (nonatomic) BOOL allowsItemLiking;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (copy, nonatomic) NSString *attributionLabel;
@property (copy, nonatomic) NSString *providerName;
@property (nonatomic, getter=isSubscriptionRequired) BOOL subscriptionRequired;
@property (copy, nonatomic) NSURL *providerUniversalLink;
@property (copy, nonatomic) NSString *providerBundleIdentifier;
@property (copy, nonatomic) NSDate *startingAirDate;
@property (copy, nonatomic) NSDate *endingAirDate;
@property (copy, nonatomic) NSString *playbackAuthorizationToken;
@property (readonly, nonatomic) MPRadioStationEvent *currentStationEvent;
@property (readonly, nonatomic) MPRadioStationEvent *upcomingStationEvent;
@property (readonly, nonatomic) long long providerID;

+ (long long)genericObjectType;
+ (id)__name_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__editorNotes_KEY;
+ (id)__allowsItemLiking_KEY;
+ (id)__attributionLabel_KEY;
+ (id)__beats1_KEY;
+ (id)__containsVideo_KEY;
+ (id)__endingAirDate_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__live_KEY;
+ (id)__providerBundleIdentifier_KEY;
+ (id)__providerID_KEY;
+ (id)__providerName_KEY;
+ (id)__providerUniversalLink_KEY;
+ (id)__startingAirDate_KEY;
+ (id)__stationEvents_KEY;
+ (id)__stationGlyphBlock_KEY;
+ (id)__subscriptionRequired_KEY;
+ (id)__subtype_KEY;
+ (id)__type_KEY;
+ (id)classesForSecureCoding;

- (id)humanDescription;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)contentItemCollectionInfo;
- (id)stationGlyph;

@end
