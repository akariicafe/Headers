@class NSString, NSDictionary, NSData, NSDate, NSArray;

@interface PHSuggestion : PHAssetCollection {
    NSData *_actionData;
    NSData *_featuresData;
    NSDate *_creationDate;
    unsigned long long _approximateCount;
    unsigned long long _approximatePhotosCount;
    unsigned long long _approximateVideosCount;
    NSArray *_assets;
}

@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDictionary *actionProperties;
@property (readonly, nonatomic) NSDictionary *featuresProperties;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly, nonatomic) unsigned short sharingComposition;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) unsigned short notificationState;
@property (readonly, nonatomic) unsigned short featuredState;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSDate *activationDate;
@property (readonly, nonatomic) NSDate *relevantUntilDate;
@property (readonly, nonatomic) NSDate *expungeDate;

+ (BOOL)managedObjectSupportsSharingComposition;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)fetchPredicateForSharingFilter:(unsigned short)a0;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)allFeaturedStateEnabledSuggestionTypes;
+ (id)allFeaturedStateEnabledSuggestionTypesForWallpaper;
+ (id)allFeaturedStateEnabledSuggestionTypesForWidget;
+ (id)availableSuggestionTypeInfosWithOptions:(id)a0 photoLibrary:(id)a1;
+ (id)fetchAllFeaturedStateEnabledSuggestionsWithOptions:(id)a0;
+ (id)fetchSuggestionsWithOptions:(id)a0;
+ (id)fetchSuggestionsWithState:(unsigned short)a0 ofType:(unsigned short)a1 withOptions:(id)a2;
+ (id)fetchSuggestionsWithState:(unsigned short)a0 withOptions:(id)a1;
+ (id)fetchWallpaperSuggestionsWithFeaturedState:(unsigned short)a0 withOptions:(id)a1;
+ (id)fetchWidgetSuggestionsWithFeaturedState:(unsigned short)a0 withOptions:(id)a1;
+ (double)lifetimeAfterBecomingActive;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)predicateForAllFeaturedStateEnabledSuggestionTypesForWallpaper;
+ (id)predicateForAllFeaturedStateEnabledSuggestionTypesForWidget;
+ (id)suggestionInfosWithOptions:(id)a0 photoLibrary:(id)a1;
+ (id)transientSuggestionWithInfo:(id)a0 photoLibrary:(id)a1;

- (id)creationDate;
- (id)assets;
- (unsigned long long)estimatedVideosCount;
- (id)localizedSubtitle;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedAssetCount;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (id)predicateForAllAssets;
- (id)predicateForAllMomentsFromRepresentativeAssets;

@end
