@class NSError, NSString, NSURL, NSData, NMSMediaItemDownloadInfo, NSDictionary, ATStoreInfo, NSNumber;

@interface ATAsset : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) unsigned long long completedAssetParts;
@property (nonatomic, getter=isLegacy) BOOL legacy;
@property (nonatomic, getter=isInstalled) BOOL installed;
@property (nonatomic) double transferStartTime;
@property (nonatomic) double queueStartTime;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *dataclass;
@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSDictionary *variantOptions;
@property (retain, nonatomic) NSString *prettyName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSURL *icon;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isRestore;
@property (nonatomic) BOOL bypassStore;
@property (nonatomic) BOOL installOnly;
@property (nonatomic) BOOL downloadOnly;
@property (nonatomic) BOOL readyForStore;
@property (nonatomic) BOOL isPrioritized;
@property (nonatomic) BOOL isForeground;
@property (nonatomic) BOOL lyricsEmbeddedInAsset;
@property (nonatomic) long long storePID;
@property (nonatomic) unsigned int priority;
@property (nonatomic) float downloadProgress;
@property (nonatomic) float installProgress;
@property (retain, nonatomic) ATStoreInfo *storeInfo;
@property (retain, nonatomic) NSString *storePlist;
@property (retain, nonatomic) NSString *infoPlist;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL installStarted;
@property (nonatomic) long long assetState;
@property (nonatomic) double queueDuration;
@property (nonatomic) double transferDuration;
@property (nonatomic) int protectionType;
@property (retain, nonatomic) NSData *resumeData;
@property (nonatomic) long long enqueueSource;
@property (nonatomic) BOOL allowDownloadOnConstrainedNetwork;
@property (retain, nonatomic) NMSMediaItemDownloadInfo *mediaItemDownloadInfo;
@property (nonatomic) unsigned long long downloadPauseReason;
@property (retain, nonatomic) NSNumber *downloadSourceContainerId;
@property (nonatomic) BOOL powerRequired;
@property (nonatomic) BOOL canUseCellularData;
@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long bytesRemaining;
@property (retain, nonatomic) NSDictionary *clientParams;

+ (id)iCloudRestoreAssetWithIdentifier:(id)a0 dataclass:(id)a1 assetType:(id)a2 restorePath:(id)a3 displayName:(id)a4;
+ (id)downloadAssetWithIdentifier:(id)a0 dataclass:(id)a1 prettyName:(id)a2;
+ (id)uploadAssetWithIdentifier:(id)a0 dataclass:(id)a1 sourcePath:(id)a2 prettyName:(id)a3;
+ (id)assetWithSerializedAsset:(id)a0;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 dataclass:(id)a1 prettyName:(id)a2;
- (id)serializedAsset;
- (unsigned long long)assetParts;
- (id)_variantDescription;
- (id)_ATAssetTypeFromDataClass:(id)a0;

@end
