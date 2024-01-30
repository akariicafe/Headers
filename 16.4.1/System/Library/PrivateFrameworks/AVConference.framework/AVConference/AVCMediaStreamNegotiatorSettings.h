@class NSArray, VCMediaNegotiatorAudioConfiguration, NSSet, VCVideoRuleCollections;

@interface AVCMediaStreamNegotiatorSettings : NSObject

@property (readonly, nonatomic) VCVideoRuleCollections *screenRuleCollections;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (readonly, nonatomic) long long tilesPerFrame;
@property (readonly, nonatomic) long long videoStreamMode;
@property (readonly, nonatomic) long long audioStreamMode;
@property (readonly, nonatomic) long long captureSource;
@property (readonly, nonatomic) int operatingMode;
@property (readonly, nonatomic) VCMediaNegotiatorAudioConfiguration *audioConfiguration;
@property (readonly, nonatomic) int preferredAudioCodec;
@property (readonly, nonatomic) unsigned int localSSRC;
@property (readonly, nonatomic) NSArray *hdrModePixelFormats;
@property (readonly, nonatomic) NSSet *hdrModesSupported;
@property (readonly, nonatomic) unsigned long long ptime;
@property (readonly, nonatomic) unsigned long long minBandwidth;
@property (readonly, nonatomic) long long accessNetworkType;

+ (unsigned long long)hdrModeWithOptions:(id)a0;
+ (id)negotiatorSettingsForMode:(long long)a0 deviceRole:(unsigned char)a1 options:(id)a2 errorString:(id *)a3;

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)a0 deviceRole:(unsigned char)a1 error:(id *)a2;

@end
