@class NSString, ICStoreMediaResponseItem, NSData, ATAsset;

@interface ATStoreDownloadOperation : ICRequestOperation

@property (retain, nonatomic) ATAsset *asset;
@property (nonatomic) long long downloadState;
@property (retain, nonatomic) NSString *downloadFilePath;
@property (nonatomic) BOOL cancelAllRemaining;
@property (retain, nonatomic) NSData *resumeData;
@property (retain, nonatomic) ICStoreMediaResponseItem *storeMediaResponseItem;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAsset:(id)a0;
- (void)performDownloadOnOperationsQueue:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
