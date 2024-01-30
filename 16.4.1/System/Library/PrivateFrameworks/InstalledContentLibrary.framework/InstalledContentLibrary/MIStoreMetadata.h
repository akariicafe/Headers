@class NSString, NSArray, NSDictionary, NSData, NSNumber;

@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *iAdAttribution;
@property (copy, nonatomic) NSString *iAdConversionDate;
@property (copy, nonatomic) NSString *iAdImpressionDate;
@property (copy, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *bundleShortVersionString;
@property (copy, nonatomic) NSString *purchaseDate;
@property (copy, nonatomic) NSString *appleID;
@property (retain, nonatomic) NSNumber *DSPersonID;
@property (retain, nonatomic) NSNumber *downloaderID;
@property (retain, nonatomic) NSNumber *familyID;
@property (retain, nonatomic) NSNumber *purchaserID;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) BOOL hasMessagesExtension;
@property (retain, nonatomic) NSNumber *initialODRSize;
@property (nonatomic, getter=isPurchasedRedownload) BOOL purchasedRedownload;
@property (retain, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (copy, nonatomic) NSString *ratingLabel;
@property (retain, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *assetToken;
@property (copy, nonatomic) NSString *softwareVersionBundleID;
@property (retain, nonatomic) NSNumber *softwareVersionExternalIdentifier;
@property (copy, nonatomic) NSString *sourceApp;
@property (copy, nonatomic) NSString *storeCohort;
@property (retain, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *betaBuildGroupID;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *genreID;
@property (copy, nonatomic) NSArray *subGenres;
@property (copy, nonatomic) NSArray *categories;
@property (nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property (nonatomic) BOOL gameCenterEverEnabled;
@property (nonatomic) BOOL isAutoDownload;
@property (copy, nonatomic) NSString *referrerURL;
@property (copy, nonatomic) NSString *referrerApp;
@property (nonatomic) BOOL sideLoadedDeviceBasedVPP;
@property (nonatomic) BOOL deviceBasedVPP;
@property (nonatomic) BOOL isB2BCustomApp;
@property (copy, nonatomic) NSString *enterpriseInstallURL;
@property (copy, nonatomic) NSString *redownloadParams;
@property (copy, nonatomic) NSDictionary *nameTranscriptions;
@property (nonatomic, getter=isFactoryInstall) BOOL factoryInstall;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSData *protectedMetadata;
@property (retain, nonatomic) NSNumber *hasOrEverHasHadIAP;

+ (id)metadataFromPlistAtURL:(id)a0 error:(id *)a1;
+ (id)metadataFromDictionary:(id)a0;
+ (id)metadataFromPlistData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
