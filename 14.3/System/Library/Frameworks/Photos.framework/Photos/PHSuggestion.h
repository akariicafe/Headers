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
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) unsigned short notificationState;
@property (readonly, nonatomic) unsigned short featuredState;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSDate *activationDate;
@property (readonly, nonatomic) NSDate *relevantUntilDate;
@property (readonly, nonatomic) NSDate *expungeDate;

+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchType;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (double)lifetimeAfterBecomingActive;
+ (id)predicateForAllFeaturedStateEnabledSuggestionTypes;
+ (id)fetchSuggestionsWithOptions:(id)a0;
+ (id)fetchSuggestionsWithState:(unsigned short)a0 withOptions:(id)a1;
+ (id)fetchSuggestionsWithState:(unsigned short)a0 ofType:(unsigned short)a1 withOptions:(id)a2;
+ (id)transientSuggestionWithInfo:(id)a0 photoLibrary:(id)a1;
+ (id)availableSuggestionTypeInfosWithOptions:(id)a0 photoLibrary:(id)a1;
+ (id)suggestionInfosWithOptions:(id)a0 photoLibrary:(id)a1;
+ (BOOL)managedObjectSupportsPendingState;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsRejectedState;
+ (id)localIdentifierWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)localizedSubtitle;
- (id)creationDate;
- (id)assets;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (id)description;
- (unsigned long long)estimatedVidoesCount;
- (id)predicateForAllAssets;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;

@end
