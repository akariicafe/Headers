@class NSObject;
@protocol OS_dispatch_queue;

@interface NMUMetricsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_processName;
+ (id)_actionNameFromMoreActionType:(unsigned long long)a0;
+ (id)_alertReasonFromDownloadWaitingReason:(unsigned long long)a0;
+ (id)_actionNameFromAlertAction:(unsigned long long)a0;
+ (id)_alertReasonFromKeepLocalErrorAlertReason:(unsigned long long)a0;
+ (id)_contextNameFromMoreActionContextType:(unsigned long long)a0;
+ (id)_endpointNameFromEndpointType:(unsigned long long)a0;
+ (id)_launcherNameForLaunchURLType:(unsigned long long)a0;
+ (id)_stringForRoutePickingResult:(unsigned long long)a0;
+ (id)_viewNameForViewType:(unsigned long long)a0;
+ (void)incrementAutoPlayChangeCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementBrowsingCountForViewType:(unsigned long long)a0 endpointType:(unsigned long long)a1;
+ (void)incrementCrownBasedVolumeControlCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementLaunchCountForLaunchURLType:(unsigned long long)a0;
+ (void)incrementPlaybackRoutePickerPresentationCount;
+ (void)incrementPlaybackShuffleAllCountFromViewType:(unsigned long long)a0 endpointType:(unsigned long long)a1;
+ (void)incrementPlaybackStartCountFromViewType:(unsigned long long)a0 endpointType:(unsigned long long)a1;
+ (void)incrementPlaybackStartCountFromViewType:(unsigned long long)a0 index:(long long)a1 endpointType:(unsigned long long)a2;
+ (void)incrementRepeatModeChangeCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementRouteChangeCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementRouteSelectCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementRouteSelectionResult:(unsigned long long)a0 endpointType:(unsigned long long)a1;
+ (void)incrementShuffleModeChangeCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementTapCountForDownloadWaitingReason:(unsigned long long)a0 action:(unsigned long long)a1;
+ (void)incrementTapCountForKeepLocalErrorAlertReason:(unsigned long long)a0 action:(unsigned long long)a1;
+ (void)incrementTapCountForMoreActionType:(unsigned long long)a0 context:(unsigned long long)a1 endpointType:(unsigned long long)a2;
+ (void)incrementTrackListTrackSelectionCountWithEndpointType:(unsigned long long)a0;
+ (void)incrementW1RouteAutoSelectionResult:(unsigned long long)a0;
+ (id)sharedMetricsReporter;
+ (void)updatePinnedAlbumsCount:(long long)a0;
+ (void)updatePinnedPlaylistsCount:(long long)a0;
+ (void)updatePinnedRecommendationsCount:(long long)a0;
+ (void)updateTopLevelContainersCount:(long long)a0;

- (void)_sendEvent:(id)a0 payload:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
