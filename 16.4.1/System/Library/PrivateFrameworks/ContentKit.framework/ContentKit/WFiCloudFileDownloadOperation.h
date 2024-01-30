@class NSFileCoordinator, NSArray, NSProgress, NSURL, NSError;

@interface WFiCloudFileDownloadOperation : NSOperation

@property (readonly, nonatomic) BOOL retrieveFolderContents;
@property (readonly, nonatomic) NSFileCoordinator *fileCoordinator;
@property (readonly, nonatomic) NSProgress *progress;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSArray *downloadedFiles;
@property (readonly, nonatomic) NSError *downloadError;

- (BOOL)isAsynchronous;
- (void)start;
- (void).cxx_destruct;
- (void)downloadDirectoryAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadItemAtFileURL:(id)a0 ofSize:(id)a1 fileIsUbiquitous:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)finishRunningWithFiles:(id)a0 error:(id)a1;
- (void)getFileInfoForURL:(id)a0 fileIsUbiquitous:(BOOL *)a1 fileIsDirectory:(BOOL *)a2 fileSize:(id *)a3 error:(id *)a4;
- (id)initWithFileURL:(id)a0 retrieveFolderContents:(BOOL)a1 progress:(id)a2;

@end
