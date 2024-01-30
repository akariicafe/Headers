@class NSString, NSObject, NSPersistentHistoryToken;
@protocol NMSPodcastsDownloadableContentControllerDelegate_Legacy, OS_dispatch_queue, OS_dispatch_source;

@interface NMSPodcastsDownloadableContentController_Legacy : NSObject <MTDBExtensionAccessObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_persistentHistorySource;
    BOOL _delegateNotificationPending;
}

@property (retain, nonatomic) NSPersistentHistoryToken *lastMergedToken;
@property (weak, nonatomic) id<NMSPodcastsDownloadableContentControllerDelegate_Legacy> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_ctx;
- (void)extensionAccessDidChange;
- (BOOL)_shouldMergeHistoryTransaction:(id)a0;
- (void)_notifyDelegateContentDidChange;
- (BOOL)_changeContainsRelevantChannelChanges:(id)a0;
- (BOOL)_changeContainsRelevantEpisodeChanges:(id)a0;
- (BOOL)_changeContainsRelevantShowChanges:(id)a0;
- (BOOL)_changeContainsRelevantStationChanges:(id)a0;
- (void)_handlePersistentStoreRemoteChangeNotification:(id)a0;
- (void)_handlePodcastSizeInfoDidChangeNotification:(id)a0;
- (void)_handlePodcastsPinningSelectionsDidChangeNotification:(id)a0;
- (void)_notifyDelegateContentDidChangeImmediately;
- (void)_processLatestPersistenHistoryChanges;
- (id)_relevantChannelProperties;
- (id)_relevantEpisodeProperties;
- (id)_relevantShowProperties;
- (id)_relevantStationProperties;
- (void)_resetPersistentHistoryTokenAndNotifyObservers;

@end
