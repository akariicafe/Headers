@class NSString, NSData, NSDate, NSNumber;

@interface BLDownload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *downloadID;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *targetDownloadDirectory;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSString *assetPath;
@property (copy, nonatomic) NSString *buyParameters;
@property (copy, nonatomic) NSString *permlink;
@property (retain, nonatomic) NSNumber *storeIdentifier;
@property (retain, nonatomic) NSNumber *storePlaylistIdentifier;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *persistentIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *cancelDownloadURL;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSDate *lastStateChangeTime;
@property (copy, nonatomic) NSString *hashType;
@property (copy, nonatomic) NSString *md5HashStrings;
@property (nonatomic) long long numberOfBytesToHash;
@property (retain, nonatomic) NSNumber *serverNumberOfBytesToHash;
@property (retain, nonatomic) NSNumber *publicationVersion;
@property (retain, nonatomic) NSNumber *isAutomaticDownload;
@property (retain, nonatomic) NSNumber *isRestore;
@property (copy, nonatomic) NSString *downloadKey;
@property (retain, nonatomic) NSNumber *accountID;
@property (retain, nonatomic) NSNumber *familyAccountID;
@property (retain, nonatomic) NSNumber *isZipStreamable;
@property (copy, nonatomic) NSData *dpInfo;
@property (copy, nonatomic) NSData *sinfData;
@property (retain, nonatomic) NSNumber *isSample;
@property (retain, nonatomic) NSNumber *isPurchase;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (retain, nonatomic) NSNumber *isLocalCacheServer;
@property (copy, nonatomic) NSString *originalURL;
@property (retain, nonatomic) NSNumber *cleanupPending;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *collectionArtistName;
@property (copy, nonatomic) NSString *collectionTitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *thumbnailImageURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (double)transferProgressFraction;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
