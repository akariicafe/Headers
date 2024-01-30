@class NSString, NSArray, NSData, NSDate, NSNumber, NSMutableArray;

@interface ASFReceipt : NSObject {
    BOOL _verbose;
    NSMutableArray *_mutableIAPs;
}

@property (readonly) NSString *bundleID;
@property (readonly) NSData *bundleIDData;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *cancellationReason;
@property (readonly) NSDate *creationDate;
@property (readonly) NSString *developerID;
@property (readonly) NSString *downloadID;
@property (readonly) NSString *frAppVersion;
@property (readonly) NSNumber *frToolVersion;
@property (readonly) NSDate *expirationDate;
@property (readonly) NSString *hwtype;
@property (readonly) NSString *installerVersionID;
@property (readonly) BOOL isDSIDless;
@property (readonly) BOOL isVPPLicensed;
@property (readonly) BOOL isRevoked;
@property (readonly) NSNumber *itemID;
@property (readonly) NSArray *iaps;
@property (readonly) NSData *opaqueDSIDData;
@property (readonly) NSString *opaqueDSIDString;
@property (readonly) NSString *organizationDisplayName;
@property (readonly) NSString *parentalControls;
@property (readonly) NSDate *purchaseDate;
@property (readonly) NSString *receiptType;
@property (readonly) NSDate *renewalDate;
@property (readonly) NSData *receiptData;
@property (readonly) NSString *receiptDataString;
@property (readonly) NSData *sha1;
@property (readonly) NSString *path;

+ (id)receiptWithContentsOfFile:(id)a0;
+ (id)receiptFromBundleAtPath:(id)a0;
+ (id)receiptFromBundleAtURL:(id)a0;
+ (id)receiptWithData:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;

@end
