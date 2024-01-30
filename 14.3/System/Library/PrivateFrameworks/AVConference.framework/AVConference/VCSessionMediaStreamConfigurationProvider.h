@class NSMutableArray;

@interface VCSessionMediaStreamConfigurationProvider : NSObject {
    NSMutableArray *_allocatedStreamIDs;
}

@property (readonly, nonatomic) NSMutableArray *audioStreamConfigurations;
@property (readonly, nonatomic) NSMutableArray *videoStreamConfigurations;
@property (readonly, nonatomic) long long highestEncodingResolution;
@property (readonly, nonatomic) BOOL isEncodingSqaures;

+ (BOOL)isVideoStreamOnDemand:(struct _VCMediaStreamConfigurationProviderVideo { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7; BOOL x8; } *)a0;
+ (void)computeMaxNetworkBitrate:(unsigned int *)a0 maxMediaBitrate:(unsigned int *)a1 maxPacketsPerSecond:(float *)a2 audioStreamIndex:(unsigned int)a3;
+ (BOOL)isAudioStreamOnDemand:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x3[4]; unsigned int x4; unsigned int x5[4]; int x6; BOOL x7; } *)a0;

- (id)init;
- (void)dealloc;
- (unsigned short)generateStreamID;
- (BOOL)initializeStreams;
- (BOOL)initializeAudioStreams;
- (BOOL)initializeVideoStreams;
- (BOOL)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7; BOOL x8; } *)a0 streamIndex:(unsigned int)a1;
- (BOOL)initializeVideoStreamWithDefaults;
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo { long long x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned int x7; BOOL x8; } *)a0;
- (BOOL)initializeAudioStreamWithIndex:(unsigned int)a0 supportedAudioRules:(id)a1;
- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio { unsigned int x0; struct _VCMediaStreamConfigurationProviderAudioBitrateInfo { int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; struct _VCMediaStreamConfigurationProviderAudioPayload { long long x0; int x1; } x3[4]; unsigned int x4; unsigned int x5[4]; int x6; BOOL x7; } *)a0 supportedAudioRules:(id)a1;

@end
