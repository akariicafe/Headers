@class NSData, NSArray, NSString, SADistance, NSDate, NSNumber, SALocation;
@protocol SAAceSerializable;

@interface SALocalSearchMapItem : SADomainObject

@property (copy, nonatomic) NSArray *attributions;
@property (retain, nonatomic) id<SAAceSerializable> detail;
@property (copy, nonatomic) NSString *detailType;
@property (copy, nonatomic) NSString *directionRole;
@property (retain, nonatomic) SADistance *distance;
@property (copy, nonatomic) NSNumber *distanceInMiles;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *localSearchProviderId;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSData *placeData;
@property (copy, nonatomic) NSData *placeData2;
@property (copy, nonatomic) NSNumber *placeId;
@property (copy, nonatomic) NSData *resultDetourInfoData;
@property (copy, nonatomic) NSString *spokenAddress;
@property (copy, nonatomic) NSString *spokenName;
@property (copy, nonatomic) NSString *suggestionsEntryType;

+ (id)mapItem;
+ (id)mapItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
