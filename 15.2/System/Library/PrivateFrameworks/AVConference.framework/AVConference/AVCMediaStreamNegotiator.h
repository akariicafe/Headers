@class NSData, NSString, VCMediaNegotiator;

@interface AVCMediaStreamNegotiator : NSObject {
    long long _errorDetailCode;
    long long _videoHeight;
    long long _videoWidth;
    long long _dpiFactor;
    unsigned char _deviceRole;
    NSData *_mediaBlobCompressed;
    NSData *_mediaBlobNegotiated;
    NSString *_dataSessionID;
    long long _mediaStreamMode;
    VCMediaNegotiator *_mediaNegotiator;
    NSData *_remoteCallInfoBlob;
    unsigned long long _videoHDRMode;
}

@property (readonly, nonatomic) NSData *offer;
@property (readonly, nonatomic) NSData *answer;

- (BOOL)createAnswer;
- (void)dealloc;
- (id)supportedPixelFormats;
- (id)initWithMode:(long long)a0 error:(id *)a1;
- (void)refreshLoggingParameters;
- (int)AVConferenceOperatingModeWithAVCMediaStreamMode:(long long)a0;
- (long long)AVCVideoStreamModeWithAVCMediaStreamMode:(long long)a0;
- (long long)clientCodecTypeWithCodecType:(long long)a0;
- (unsigned char)VCVideoFeatureListStringTypeWithAVCMediaStreamMode:(long long)a0;
- (BOOL)processOffererInitOptions:(id)a0 errorReason:(id *)a1;
- (BOOL)initNegotiatorLocalConfiguration:(id *)a0;
- (BOOL)createOffer;
- (id)initWithMode:(long long)a0 options:(id)a1 error:(id *)a2;
- (BOOL)addLocalCallInfoBlobToOutgoingDictionary:(id)a0;
- (id)initWithOffer:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)processOfferWithError:(id *)a0 errorReason:(id *)a1;
- (BOOL)processAnswererInitOptions:(id)a0 errorReason:(id *)a1;
- (BOOL)processAnswerWithError:(id *)a0 errorReason:(id *)a1;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0;
- (unsigned int)pickBestPixelFormatFromSet:(id)a0 preferenceList:(unsigned int *)a1 count:(int)a2 acceptDefault:(BOOL)a3;
- (id)initWithOffer:(id)a0 error:(id *)a1;
- (BOOL)setAnswer:(id)a0 withError:(id *)a1;
- (id)generateMediaStreamConfigurationWithError:(id *)a0;
- (id)generateMediaStreamInitOptionsWithError:(id *)a0;

@end
