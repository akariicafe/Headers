@class MPAVController, NSString, MPAVItem, NSData, NSOperationQueue, MPCReportingController;

@interface MPCReportingPlaybackObserver : NSObject {
    NSData *_currentJingleReportingTimedMetadata;
    BOOL _hasPendingContainerChange;
    BOOL _hasSetLastPlayEventTimeStamp;
    BOOL _isReloadingWithPlaybackContext;
    BOOL _itemDidChangeWhenReloadingPlaybackContext;
    BOOL _isScrubbing;
    BOOL _currentItemIsHLS;
    MPAVItem *_itemForCurrentTimeChange;
    NSOperationQueue *_recordEventOperationQueue;
    NSString *_itemContentItemIDForLastPlayEventEndTime;
    double _lastPlayEventEndTimeForCurrentItem;
    double _lastPlayEventTimeStamp;
    BOOL _shouldReportAsPlaying;
    double _startTimeForCurrentTimeChange;
}

@property (readonly, nonatomic) MPAVController *player;
@property (nonatomic, getter=isOffline) BOOL offline;
@property (readonly, nonatomic) MPCReportingController *reportingController;
@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled;
@property (nonatomic) unsigned long long storeAccountID;
@property (copy, nonatomic) NSString *storeFrontID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPlayer:(id)a0 reportingController:(id)a1;
- (id)newPlayActivityEvent;
- (void)didHitPlaybackTimeoutEndingPlayback:(BOOL)a0 withCurrentItem:(id)a1;
- (void)didTransitionItemForBan:(id)a0;
- (void)recordPlayActivityEvents:(id)a0 forEventSource:(id)a1;
- (void)recordUserSeekFromTime:(double)a0 toTime:(double)a1 forItem:(id)a2;
- (void)willHitPlaybackTimeoutEndingPlayback:(BOOL)a0 withCurrentItem:(id)a1;
- (void)willTransitionItemForBan:(id)a0;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)a0;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)a0;
- (void)_playerDidSetCurrentTimeNotification:(id)a0;
- (void)_playerItemDidChangeNotification:(id)a0;
- (void)_playerItemWillChangeNotification:(id)a0;
- (void)_playerPlaybackStateDidChangeNotification:(id)a0;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)a0;
- (void)_playerWillSetCurrentTimeNotification:(id)a0;
- (void)_playerItemDidChangeWhenReloadingPlaybackContextNotification:(id)a0;
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)a0 eventSource:(id)a1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)a0;
- (void)_sendPlaybackStartNotification;
- (void)_sendPlaybackEndNotification:(double)a0 endTime:(double)a1;
- (void)_setLastPlayEventEndTime:(double)a0 forItemContentItemID:(id)a1;
- (double)_itemEndTimeForItem:(id)a0 withProposedEndTime:(double)a1;
- (double)_itemStartTimeForItem:(id)a0;

@end
