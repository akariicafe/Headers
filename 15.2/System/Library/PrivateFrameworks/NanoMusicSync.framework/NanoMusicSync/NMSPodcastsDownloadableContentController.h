@class NSObject, NSString, NSPersistentHistoryToken;
@protocol OS_dispatch_queue, NMSPodcastsDownloadableContentControllerDelegate;

@interface NMSPodcastsDownloadableContentController : NSObject <MTDBExtensionAccessObserver>

@property (retain, nonatomic) NSPersistentHistoryToken *lastMergedToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL delegateNotificationPending;
@property (weak, nonatomic) id<NMSPodcastsDownloadableContentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_ctx;
- (void).cxx_destruct;
- (id)init;
- (void)_handlePodcastSizeInfoDidChangeNotification:(id)a0;
- (void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)a0;
- (void)extensionAccessDidChange;
- (void)_resetPersistentHistoryTokenAndNotifyObservers;
- (void)_handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)_relevantEpisodeProperties;
- (BOOL)_changeContainsRelevantEpisodeChanges:(id)a0;
- (void)_notifyDelegateContentDidChange;
- (id)_relevantShowProperties;
- (id)_relevantStationProperties;
- (id)_relevantChannelProperties;
- (BOOL)_changeContainsRelevantShowChanges:(id)a0;
- (BOOL)_changeContainsRelevantStationChanges:(id)a0;
- (BOOL)_changeContainsRelevantChannelChanges:(id)a0;
- (void)_notifyDelegateContentDidChangeImmediately;
- (BOOL)_shouldMergeHistoryTransaction:(id)a0;

@end
