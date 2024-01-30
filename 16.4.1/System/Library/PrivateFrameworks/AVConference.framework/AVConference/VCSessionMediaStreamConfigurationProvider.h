@class NSMutableArray;
@protocol VCIDSStreamIDGenerator;

@interface VCSessionMediaStreamConfigurationProvider : NSObject {
    NSMutableArray *_allocatedStreamIDs;
    long long _sessionMode;
    unsigned int _internalAudioPacketsPerSecond;
    BOOL _use96Tier;
    id<VCIDSStreamIDGenerator> _streamIDGenerator;
    unsigned int _videoStreamConfigurationsCount;
}

@property (readonly, nonatomic) NSMutableArray *audioStreamConfigurations;
@property (readonly, nonatomic) NSMutableArray *videoStreamConfigurations;
@property (readonly, nonatomic) long long highestEncodingResolution;
@property (readonly, nonatomic) BOOL isEncodingSqaures;

+ (BOOL)audioConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; unsigned int x1; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x4[4]; unsigned int x5; unsigned int x6[4]; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; long long x12[9]; } *)a0 supportsDeviceClass:(long long)a1;
+ (void)computeMaxNetworkBitrate:(unsigned int *)a0 maxMediaBitrate:(unsigned int *)a1 maxPacketsPerSecond:(float *)a2 audioStreamIndex:(unsigned int)a3 internalPacketsPerSecond:(unsigned int)a4;
+ (void)computeMaxNetworkBitrate:(unsigned int *)a0 maxMediaBitrate:(unsigned int *)a1 maxPacketsPerSecond:(float *)a2 maxIDSStreamIDCount:(unsigned int)a3 internalPacketsPerSecond:(unsigned int)a4 audioConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; unsigned int x1; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x4[4]; unsigned int x5; unsigned int x6[4]; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; long long x12[9]; } *)a5;
+ (void)fixAudioStreamConfigurations;
+ (BOOL)isAudioStreamOnDemand:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; unsigned int x1; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x4[4]; unsigned int x5; unsigned int x6[4]; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; long long x12[9]; } *)a0 isLowestQualityAudio:(BOOL)a1;
+ (BOOL)isVideoStreamOnDemand:(struct _VCMediaStreamConfigurationProviderVideo { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7; BOOL x8; unsigned int x9; } *)a0;

- (void)dealloc;
- (void)audioStreamConfigs:(struct _VCMediaStreamConfigurationProviderAudio **)a0 configCount:(unsigned int *)a1;
- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; unsigned int x1; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x4[4]; unsigned int x5; unsigned int x6[4]; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; long long x12[9]; } *)a0 supportedAudioRules:(id)a1;
- (id)initWithStreamIDGenerator:(id)a0 sessionMode:(long long)a1 supportedAudioRules:(id)a2;
- (BOOL)initializeAudioStreamWithConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; unsigned int x1; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; unsigned int x3; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x4[4]; unsigned int x5; unsigned int x6[4]; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned int x11; long long x12[9]; } *)a0 maxIDSStreamIDCount:(unsigned int)a1 supportedAudioRules:(id)a2 isLowestQualityAudio:(BOOL)a3;
- (BOOL)initializeAudioStreamsWithSupportedRules:(id)a0;
- (BOOL)initializeStreamsWithSupportedAudioRules:(id)a0;
- (BOOL)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7; BOOL x8; unsigned int x9; } *)a0 streamIndex:(unsigned int)a1;
- (BOOL)initializeVideoStreamWithDefaults;
- (BOOL)initializeVideoStreams;
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7; BOOL x8; unsigned int x9; } *)a0;

@end
