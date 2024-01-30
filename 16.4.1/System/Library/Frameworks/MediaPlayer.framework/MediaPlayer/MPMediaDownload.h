@interface MPMediaDownload : NSObject

@property (nonatomic) long long libraryID;
@property (nonatomic) long long storeSagaID;
@property (nonatomic) long long downloadReason;
@property (nonatomic) double downloadProgress;
@property (nonatomic) unsigned long long downloadPausedReason;
@property (readonly, nonatomic) long long deviceLibraryID;
@property (readonly, nonatomic) long long storeItemID;

+ (unsigned long long)MPMediaDownloadPauseReasonForATAsset:(id)a0;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)a0;
+ (id)MPMediaDownloadsFromATAssets:(id)a0;
+ (long long)_downloadReasonFromStoreDownload:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithATAsset:(id)a0;
- (id)initWithMPStoreDownload:(id)a0;

@end
