@class NSDate, NSString, NSArray, NSURL, NSData, NSDictionary, SALocalSearchOperationHours, SALocation;

@interface SALocalSearchBusiness2 : SADomainObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SALocation *address;
@property (copy, nonatomic) NSURL *businessUrl;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *currencySymbol;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSDictionary *identifierMap;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *offerLists;
@property (retain, nonatomic) SALocalSearchOperationHours *operationHours;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSArray *photoList;
@property (copy, nonatomic) NSData *placeData2;
@property (copy, nonatomic) NSString *priceRange;
@property (copy, nonatomic) NSArray *reviewList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)business2;
+ (id)business2WithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
