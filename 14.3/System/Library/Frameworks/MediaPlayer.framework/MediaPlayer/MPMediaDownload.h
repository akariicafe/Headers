@interface MPMediaDownload : NSObject

@property long long libraryID;
@property long long storeSagaID;
@property (nonatomic) long long downloadReason;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long downloadPausedReason;
@property (readonly, nonatomic) long long deviceLibraryID;
@property (readonly, nonatomic) long long storeItemID;

+ (unsigned long long)MPMediaDownloadPauseReasonForATAsset:(id)a0;
+ (long long)_downloadReasonFromStoreDownload:(id)a0;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)a0;
+ (id)MPMediaDownloadsFromATAssets:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (id)initWithMPStoreDownload:(id)a0;
- (id)initWithATAsset:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
