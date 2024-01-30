@class SALocalSearchRating, NSArray, NSDictionary, NSURL, NSString, NSNumber, NSDate;

@interface SALocalSearchBusiness : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *businessId;
@property (copy, nonatomic) NSDictionary *businessIds;
@property (copy, nonatomic) NSURL *businessUrl;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *openingHours;
@property (copy, nonatomic) NSArray *phoneNumbers;
@property (copy, nonatomic) NSURL *photo;
@property (retain, nonatomic) SALocalSearchRating *rating;
@property (copy, nonatomic) NSArray *reviews;
@property (nonatomic) long long totalNumberOfReviews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)business;
+ (id)businessWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
