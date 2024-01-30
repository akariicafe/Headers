@class NSURL, NSArray, NSURLSessionDownloadTask;
@protocol FCContentContext;

@interface FCResourceArchiveFetchOperation : FCOperation

@property (copy, nonatomic) NSURL *archiveURL;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (retain, nonatomic) NSArray *resultResources;
@property (nonatomic) unsigned long long maxConcurrentFetchCount;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ interestTokenHandler;
@property (copy, nonatomic) id /* block */ archiveHandler;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)_ensureResourcesAreReadyForUse:(id)a0 completion:(id /* block */)a1;
- (void)_unzipResourcesFromArchiveFileURL:(id)a0 completion:(id /* block */)a1;
- (id)initWithArchiveURL:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
