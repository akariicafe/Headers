@interface WFPodcastUtilities : NSObject

+ (id)generatePlaybackQueueURL:(id)a0 withQueryDictionary:(id)a1;
+ (struct _MRSystemAppPlaybackQueue { } *)createPlaybackQueueWithURLs:(id)a0 setImmediatePlayback:(BOOL)a1;
+ (void *)createPlayerPathForOrigin:(void *)a0;
+ (void *)createLocalPlayerPath;
+ (void)createPreferredPlayerPathWithCompletion:(id /* block */)a0;
+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
