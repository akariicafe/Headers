@class NSString, NSDictionary, NSMutableDictionary, NSMutableArray, NSNumber;

@interface SDPMini : NSObject {
    NSString *_sdpUsername;
    NSMutableDictionary *_audioParameters;
    NSNumber *videoRTPID;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    NSMutableDictionary *_mediaLines;
}

@property (retain, nonatomic) NSString *origin;
@property (readonly, nonatomic) NSMutableArray *audioPayloads;
@property (readonly, nonatomic) NSMutableArray *secondaryAudioPayloads;
@property (retain, nonatomic) NSString *sessionIP;
@property (retain, nonatomic) NSNumber *audioRTPPort;
@property (retain, nonatomic) NSNumber *audioRTCPPort;
@property (retain, nonatomic) NSNumber *audioRTPID;
@property (nonatomic) BOOL allowRTCPFB;
@property (retain, nonatomic) NSNumber *answerBandwidth;
@property (retain, nonatomic) NSNumber *maxBandwidth;
@property (nonatomic) BOOL allowsDynamicMaxBitrate;
@property (retain, nonatomic) NSDictionary *featuresListDict;
@property (nonatomic) BOOL allowsContentsChangeWithAspectPreservation;
@property (retain, nonatomic) NSNumber *aacBlockSize;
@property (retain, nonatomic) NSNumber *audioUnitModel;
@property (nonatomic) BOOL allowAudioRecording;

+ (BOOL)setPayload:(int)a0 mediaLine:(id)a1;

- (id)init;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (id)SDPUsername;
- (void)addMediaLine:(id)a0 mediaType:(int)a1;
- (void)parseSDPFromString:(id)a0;
- (id)getMediaLineForType:(int)a0;
- (id)composeSessionString;
- (id)composeAudioString;
- (id)mediaTypeToString:(int)a0;
- (void)createVideoImageAttr:(int)a0 direction:(int)a1 dimensions:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a2 count:(int)a3;
- (BOOL)setVideoPayloads:(int *)a0 count:(int)a1;
- (id)toStringWithVideoEnabled:(BOOL)a0;
- (void)setBasebandCodecType:(id)a0 sampleRate:(id)a1;
- (BOOL)getBasebandCodecType:(id *)a0 sampleRate:(id *)a1;
- (void)getNegotiatedResolutionForPayload:(int)a0 forInterface:(int)a1 withRule:(id)a2 direction:(int)a3 result:(struct imageTag { int x0; int x1; int x2; int x3; int x4; int x5; int x6; float x7; int x8; } *)a4 remoteSupportsHD:(BOOL)a5 screenSharing:(BOOL)a6;
- (id)composeBandwidthString;
- (id)composeFLSString;
- (id)composeAudioFMTPForPayload:(id)a0;
- (void)parseAudioMediaAttributes:(id)a0;
- (id)parseIP:(id)a0;
- (void)parseBandwidth:(id)a0;
- (void)parseMediaLine:(id)a0;
- (void)parseSessionAttributes:(id)a0;
- (id)parseRTPID:(id)a0;
- (id)parseRTCPPort:(id)a0;
- (void)parseAudioFormatAttribute:(id)a0;
- (int)rulesFramerate:(int)a0;
- (void)rulesImageSizeForExternalPayload:(int)a0 pWidth:(int *)a1 pHeight:(int *)a2;
- (void)setUseSbr:(BOOL)a0 blockSize:(int)a1 forAACFormat:(int)a2;
- (BOOL)getUseSbr:(BOOL *)a0 blockSize:(int *)a1 forAACFormat:(int)a2;
- (void)setVideoRTCPFB:(BOOL)a0 useNACK:(BOOL)a1;

@end
