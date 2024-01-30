@class NSDate;

@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) BOOL supportsCancellation;
@property (nonatomic) BOOL supportsPausing;
@property (nonatomic) BOOL renewsOfflineKeysAutomatically;
@property (nonatomic) BOOL allowsCellular;
@property (retain, nonatomic) NSDate *downloadExpirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (nonatomic) BOOL performsKeyFetchOnly;
@property (nonatomic) BOOL downloadFailedDueToError;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (readonly, nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
