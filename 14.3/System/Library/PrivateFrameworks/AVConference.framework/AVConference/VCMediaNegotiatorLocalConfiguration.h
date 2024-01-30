@class NSMutableOrderedSet, NSString, NSDictionary, VCMediaNegotiatorAudioConfiguration, NSMutableSet, VCVideoRuleCollections, NSSet;

@interface VCMediaNegotiatorLocalConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned int videoSSRC;
@property (retain, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration;
@property (retain, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) VCVideoRuleCollections *screenRuleCollections;
@property (nonatomic) int preferredAudioCodec;
@property (nonatomic) int deviceRole;
@property (retain, nonatomic) NSDictionary *videoFeatureStrings;
@property (nonatomic) BOOL allowRTCPFB;
@property (nonatomic) BOOL isCaller;
@property (retain, nonatomic) NSString *basebandCodec;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (retain, nonatomic) NSMutableSet *bandwidthConfigurations;
@property (retain, nonatomic) NSSet *captionsSenderLanguages;
@property (retain, nonatomic) NSSet *captionsReceiverLanguages;
@property (nonatomic) void *callLogFile;
@property (nonatomic) unsigned long long creationTime;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (retain, nonatomic) NSMutableOrderedSet *multiwayAudioStreams;
@property (retain, nonatomic) NSMutableOrderedSet *multiwayVideoStreams;
@property (retain, nonatomic) NSSet *momentsVideoCodecs;
@property (retain, nonatomic) NSSet *momentsImageTypes;
@property (nonatomic) BOOL SIPDisabled;
@property (nonatomic) BOOL secureMessagingRequired;
@property (nonatomic) unsigned int faceTimeSwitches;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) BOOL alwaysOnAudRedEnabled;
@property (nonatomic) BOOL alwaysOnAudioRedundancyEnabled;
@property (nonatomic) BOOL highFecEnabled;
@property (nonatomic) BOOL lowFpsVideoEnabled;
@property (nonatomic) BOOL vplrFecEnabled;
@property (nonatomic) BOOL rampDownBWDropEnabled;
@property (nonatomic) BOOL fastMediaDuplicationEnabled;
@property (nonatomic) BOOL iRATRtpEnabled;
@property (nonatomic) BOOL preWarmCellEnabled;
@property (nonatomic) BOOL duplicateImportantPktsEnabled;
@property (nonatomic) unsigned int tilesPerVideoFrame;
@property (nonatomic) BOOL oneToOneModeSupported;
@property (nonatomic) BOOL ltrpEnabled;
@property (retain, nonatomic) NSSet *pixelFormats;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;
@property (nonatomic) unsigned char linkProbingCapabilityVersion;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (BOOL)setupBandwidthConfigurationsWithArbiter:(id)a0;
- (BOOL)setupBandwidthExtensionConfiguration:(id)a0;
- (BOOL)isEqualBandwidthConfigurations:(id)a0;
- (BOOL)isEqualMultiwayAudioStreamSet:(id)a0;
- (BOOL)isEqualMultiwayVideoStreamSet:(id)a0;
- (BOOL)isEqualFeatureStrings:(id)a0;
- (BOOL)isEqualMomentsImageTypes:(id)a0;
- (BOOL)isEqualMomentsVideoCodecs:(id)a0;
- (BOOL)isEqualFaceTimeSettings:(id)a0;
- (id)initWithBitrateArbiter:(id)a0;
- (void)addBandwidthConfiguration:(id)a0;
- (void)addMultiwayAudioStream:(id)a0;
- (void)addMultiwayVideoStream:(id)a0;

@end
