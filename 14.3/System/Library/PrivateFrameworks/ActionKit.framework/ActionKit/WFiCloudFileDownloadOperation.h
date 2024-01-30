@class NSFileCoordinator, NSArray, NSProgress, NSURL, NSError, NSMetadataQuery;

@interface WFiCloudFileDownloadOperation : NSOperation

@property (readonly, nonatomic) NSFileCoordinator *fileCoordinator;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSMetadataQuery *query;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSArray *downloadedFiles;
@property (readonly, nonatomic) NSError *downloadError;

- (void)queryDidFinishGathering:(id)a0;
- (void).cxx_destruct;
- (void)queryDidUpdate:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (id)initWithFileURL:(id)a0 progress:(id)a1;
- (void)getFileInfoForURL:(id)a0 fileIsUbiquitous:(BOOL *)a1 fileIsDirectory:(BOOL *)a2 fileSize:(id *)a3 error:(id *)a4;
- (void)downloadItemAtFileURL:(id)a0 ofSize:(id)a1 fileIsUbiquitous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)finishRunningWithFiles:(id)a0 error:(id)a1;

@end
