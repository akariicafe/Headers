@class NSString, NSURL, MKWalletMerchantStylingInfo;

@interface PKMapsBrand : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) int resultProviderIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *detailedCategory;
@property (retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo;
@property (copy, nonatomic) NSURL *logoURL;
@property (retain, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *heroImageAttributionName;
@property (copy, nonatomic) NSURL *businessChatURL;
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
- (BOOL)isEqual:(id)a0;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToMapsBrand:(id)a0;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)hasCloudArchivableDeviceData;

@end
