@class NSArray, NSMutableDictionary, NSMutableSet, VCIDRScheduler, NSMutableArray;

@interface VCSessionUplinkVideoStreamController : NSObject {
    float _startTime;
    id _delegate;
    NSMutableDictionary *_videoStreams;
    NSMutableDictionary *_streamInfoMap;
    NSMutableSet *_streamToPause;
    NSMutableSet *_streamToResume;
    NSMutableDictionary *_streamScheduleWifi;
    NSMutableDictionary *_streamScheduleCell;
    NSMutableDictionary *_currentStreamSchedule;
    VCIDRScheduler *_schedulerWifi;
    VCIDRScheduler *_schedulerCell;
    BOOL _pendingStreamsUpdated;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    NSMutableArray *_streamsPendingKeyFrameGeneration;
    NSMutableArray *_streamResetIDR;
    BOOL _streamsUseRTCP;
}

@property (readonly) NSMutableDictionary *activeVideoStreams;
@property (copy, nonatomic) NSMutableDictionary *pendingVideoStreams;
@property unsigned int captureFrameRate;
@property (copy, nonatomic) NSArray *streamIDsWifi;
@property (copy, nonatomic) NSArray *streamIDsCell;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) BOOL dynamicVideoPriorityEnabled;

- (void)unlock;
- (void)lock;
- (id)delegate;
- (void)dealloc;
- (void)restart;
- (void)initilizeStreamInfoMapWithStreamInfos:(id)a0;
- (BOOL)setStreamsUseRTCPWithStreamInfos:(id)a0;
- (id)newVideoStreamKeyFrameScheduleWithStreamIDs:(id)a0;
- (BOOL)pauseStreams;
- (BOOL)filterPendingTemporalStreams;
- (BOOL)resumeStreams;
- (void)handleStreamsPendingKeyFrameGeneration;
- (void)handleStreamsResetIDR;
- (id)anchorStreamIDWithCappedVideoStreamIDs:(id)a0;
- (id)getMultiwayConfigForStreamID:(id)a0;
- (BOOL)shouldGenerateIDRWithStreamSchedule:(id)a0;
- (void)selectVideoStreamForVideoPriority;
- (id)videoStreamPendingKeyFrameGenerationWithStreamID:(id)a0 shouldRemoveFromPendingArray:(BOOL *)a1;
- (id)schedulerStreamWithVideoStream:(id)a0;
- (id)initWithVideoStreams:(id)a0 streamInfos:(id)a1 delegate:(id)a2;
- (void)setIsLocalOnCellular:(BOOL)a0 cappedVideoStreamIDs:(id)a1;
- (void)generateKeyFrameWithStreamID:(id)a0;

@end
