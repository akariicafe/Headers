@class NSSet, NSString, NSDate;

@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *identifiers;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) long long supportedOptions;
@property (nonatomic) long long supportedDevices;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *dirtyStateIdentifier;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) NSDate *expiry;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) unsigned long long productState;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationMessage;
@property (copy, nonatomic) NSString *discoveryCardIdentifier;

+ (id)paymentSetupFeatureWithProtobuf:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)protobuf;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0 localizedDisplayName:(id)a1;
- (void)sanitizePaymentSetupFeature;

@end
