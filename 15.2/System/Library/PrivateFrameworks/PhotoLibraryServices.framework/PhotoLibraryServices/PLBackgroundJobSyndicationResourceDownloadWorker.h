@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (long long)syndicationWorkerPriority;

- (unsigned long long)batchSize;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;

@end
