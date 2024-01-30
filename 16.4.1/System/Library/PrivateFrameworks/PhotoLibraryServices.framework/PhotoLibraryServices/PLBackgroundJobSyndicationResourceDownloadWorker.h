@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (BOOL)isNetworkAccessAllowed;

@end
