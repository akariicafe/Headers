@class NSArray, NSString, NSData, NSDate, NSNumber, NSDictionary;

@interface ASDJobActivity : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_persistentID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *appReceiptData;
@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSNumber *artistID;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *betaExternalVersionIdentifier;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *buyParams;
@property (copy, nonatomic) NSString *cancelDownloadURL;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) BOOL cancelIfDuplicate;
@property (copy, nonatomic) NSString *collectionName;
@property (copy, nonatomic) NSNumber *divertedTrackingID;
@property (copy, nonatomic) NSNumber *enableExtensions;
@property (nonatomic) BOOL explicitContent;
@property (copy, nonatomic) NSNumber *externalOrderKey;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSNumber *genreID;
@property (nonatomic) BOOL hasMessagesExtension;
@property (nonatomic) BOOL hasWatchApp;
@property (nonatomic) BOOL isAutomatic;
@property (nonatomic) BOOL isCompatibilityUpdate;
@property (nonatomic) BOOL isDeviceBasedVPP;
@property (nonatomic) BOOL isGameCenterEnabled;
@property (nonatomic) BOOL isInQueue;
@property (nonatomic) BOOL isFromStore;
@property (nonatomic) BOOL isPurchasedRedownload;
@property (nonatomic) BOOL isPendingApproval;
@property (nonatomic) BOOL isRestore;
@property (nonatomic) BOOL isShared;
@property (nonatomic) BOOL isTVTemplate;
@property (nonatomic) BOOL isUpdate;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) BOOL launchProhibited;
@property (copy, nonatomic) NSString *messagesArtworkURL;
@property (copy, nonatomic) NSDate *purchaseDate;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (copy, nonatomic) NSString *ratingLabel;
@property (copy, nonatomic) NSNumber *ratingRank;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSNumber *storeAccountID;
@property (copy, nonatomic) NSString *storeAccountName;
@property (copy, nonatomic) NSString *storeCorrelationKey;
@property (copy, nonatomic) NSDictionary *storeDownloadInfo;
@property (copy, nonatomic) NSString *storeDownloadKey;
@property (copy, nonatomic) NSString *storefront;
@property (copy, nonatomic) NSString *storeTransactionID;
@property (nonatomic) BOOL softwareIconNeedsShine;
@property (copy, nonatomic) NSNumber *softwareVersionExternalIdentifier;
@property (copy, nonatomic) NSString *storeCohort;
@property (copy, nonatomic) NSString *thumbnailURL;
@property (getter=is32BitOnly) BOOL thirtyTwoBitOnly;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSNumber *iAdAttribution;
@property (copy, nonatomic) NSDate *iAdConversionDate;
@property (copy, nonatomic) NSDate *iAdImpressionDate;
@property (readonly, nonatomic) NSNumber *persistentID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
