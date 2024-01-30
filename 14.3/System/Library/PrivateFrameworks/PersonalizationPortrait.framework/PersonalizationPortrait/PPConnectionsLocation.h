@class NSString, NSDictionary, NSURL, NSDate, NSNumber;

@interface PPConnectionsLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *originatingBundleID;
@property (copy, nonatomic) NSString *fullFormattedAddress;
@property (copy, nonatomic) NSString *thoroughfare;
@property (copy, nonatomic) NSString *subThoroughfare;
@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSURL *originatingWebsiteURL;
@property (copy, nonatomic) NSURL *mapItemURL;
@property (nonatomic) BOOL copiedToPasteboard;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *shortValue;
@property (nonatomic) BOOL shouldAggregate;
@property (copy, nonatomic) NSString *documentID;
@property (copy, nonatomic) NSDictionary *addressComponents;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *trigger;
@property (copy, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSNumber *lifetime;

+ (unsigned long long)round:(double)a0 toNearest:(double)a1;

- (id)init;
- (id)addressDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatingBundleID:(id)a0;
- (id)quickTypeItem;
- (unsigned char)_pexItemSource;
- (unsigned long long)_roundedPredictionAge;
- (BOOL)isEqualToConnectionsLocation:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
