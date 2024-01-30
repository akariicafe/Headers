@class NSString, NSSet, NSURL, NSDate, PKImage;

@interface PKPhysicalCard : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSURL *frontFaceImageURL;
@property (copy, nonatomic) NSString *nameOnCard;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *trackingNumber;
@property (copy, nonatomic) NSString *shippingCompany;
@property (copy, nonatomic) NSSet *orderActivity;
@property (copy, nonatomic) NSSet *shippingActivity;
@property (retain, nonatomic) PKImage *frontFaceImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)latestOrderActivity;
- (id)latestShippingActivity;
- (id)shipmentTrackingURL;
- (void)encodeWithCoder:(id)a0;

@end
