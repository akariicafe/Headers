@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL reverseLocationDataIsValid;
@property (readonly, nonatomic) NSData *reverseLocationData;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) unsigned long long variationSuggestionStates;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (id)localizedGeoDescriptionIsHome:(BOOL *)a0;
- (void).cxx_destruct;
- (id)_locationInfo;
- (id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL *)a0;

@end
