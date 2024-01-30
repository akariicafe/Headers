@class NSDictionary;

@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation

@property (readonly, nonatomic) NSDictionary *syncInfo;

+ (id)sharedLibraryRequestQueue;

- (void)execute;
- (void).cxx_destruct;
- (id)_fetchRequestForSyncInfoWithFetchRequest:(id)a0;
- (void)_updatePodcastsSyncInfo:(id)a0 forEpisode:(id)a1 withDownloadInfoIdentifiers:(id)a2;
- (id)_fetchRequestForSyncInfoWithPredicate:(id)a0;

@end
