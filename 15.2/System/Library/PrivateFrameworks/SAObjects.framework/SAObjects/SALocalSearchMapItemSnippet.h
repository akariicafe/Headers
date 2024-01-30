@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (nonatomic) BOOL chainResultSet;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *providerCommand;
@property (copy, nonatomic) NSNumber *regionOfInterestRadiusInMiles;
@property (nonatomic) BOOL searchAlongRoute;
@property (retain, nonatomic) SALocation *searchRegionCenter;
@property (copy, nonatomic) NSNumber *userCurrentLocation;

+ (id)mapItemSnippet;
+ (id)mapItemSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
