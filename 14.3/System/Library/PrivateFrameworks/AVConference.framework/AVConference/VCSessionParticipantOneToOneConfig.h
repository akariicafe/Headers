@class AVCRateControlFeedbackController, AVCStatisticsCollector, AVCBasebandCongestionDetector, VCRateControlMediaController;

@interface VCSessionParticipantOneToOneConfig : VCObject

@property (nonatomic) int deviceRole;
@property (nonatomic) unsigned long long idsParticipantID;
@property (retain, nonatomic) AVCRateControlFeedbackController *feedbackController;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) void *audioMediaControlInfoGenerator;
@property (nonatomic) void *videoMediaControlInfoGenerator;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic) struct tagHANDLE { int x0; } *mediaQueue;
@property (nonatomic) struct tagVCMediaQueue { } *vcMediaQueue;
@property (nonatomic) BOOL negotiatedVideoEnabled;

- (id)init;
- (void)dealloc;

@end
