@class NSString, NSData, CLLocation, NSDate;

@interface PPLocationNamedEntities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *locationName;
@property (retain, nonatomic) NSString *streetAddress;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *stateOrProvince;
@property (retain, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *unstructuredLocationString;
@property (nonatomic) double score;
@property (retain, nonatomic) NSString *documentId;
@property (retain, nonatomic) NSData *mapItem;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
