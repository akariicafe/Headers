@class NSString, NSURL, CNPostalAddress, CLLocation, MKWalletMerchantStylingInfo;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) int resultProviderIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (copy, nonatomic) CNPostalAddress *postalAddress;
@property (copy, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *heroImageAttributionName;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *detailedCategory;
@property (retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo;
@property (copy, nonatomic) NSURL *businessChatURL;
@property (copy, nonatomic) CLLocation *location;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)recordNamePrefix;
+ (void)deleteFromCloudStoreRecord:(id)a0;

- (void).cxx_destruct;
- (id)jsonRepresentation;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)description;
- (id)_jsonEncodedPostalAddressString;
- (BOOL)isEqualToMapsMerchant:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)hasCloudArchivableDeviceData;

@end
