@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MiroCloudDownloader : NSObject

@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly) NSObject<OS_dispatch_queue> *cancellationQueueFor26820423;
@property (nonatomic) double totalInitialDownloadSize;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) NSArray *localAssets;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ itemCompletedBlock;
@property (readonly, nonatomic) unsigned long long nonLocalCount;

+ (id)cloudDownloaderWithAssets:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;
- (void)cancelDownloads;
- (void)startDownloadsWithCompletionHandler:(id /* block */)a0;

@end
