@class AVCStatisticsCollector, NSDictionary, NSMutableDictionary, VCRateControlMediaController;

@interface VCVideoTransmitterConfig : NSObject

@property (nonatomic) long long videoResolution;
@property (nonatomic) int videoSource;
@property (nonatomic) long long codecType;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) BOOL enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) unsigned long long recommendedMTU;
@property (nonatomic) BOOL isIPv6;
@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;
@property (nonatomic) int reportingParentID;
@property (nonatomic) int videoPayload;
@property (nonatomic) int encodingMode;
@property (nonatomic) NSDictionary *colorInfo;
@property (nonatomic) _Atomic unsigned char *videoPriorityPointer;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) int mode;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (readonly, nonatomic) struct tagVCVideoTransmitterStreamConfig { struct tagHANDLE *x0; } *streamConfigs;
@property (nonatomic) int streamCount;
@property (nonatomic) int tilesPerFrame;
@property (nonatomic) BOOL useRateControl;
@property (nonatomic) unsigned int pixelFormat;
@property (readonly, nonatomic) NSMutableDictionary *customFeatureListStrings;
@property (nonatomic) BOOL reinitEncoderOnFrameSizeChangeEnabled;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (retain, nonatomic) VCRateControlMediaController *mediaController;
@property (nonatomic) void *mediaControlInfoGenerator;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addCustomFeatureListString:(id)a0 payload:(int)a1;

@end
