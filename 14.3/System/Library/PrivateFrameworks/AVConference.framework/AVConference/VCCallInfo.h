@class NSString, SDPMini;

@interface VCCallInfo : NSObject {
    BOOL is4x;
    double firstDegradedMeasure;
    double videoDegradedThreshold;
    double _videoNearDegradedThreshold;
}

@property unsigned int callID;
@property (nonatomic) unsigned int auNumber;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) unsigned int cellBandwidth;
@property (copy, nonatomic) NSString *participantID;
@property (readonly, nonatomic) BOOL isHDVideoSupported;
@property (nonatomic) BOOL isPreLionOS;
@property (nonatomic) BOOL isVideoQualityDegraded;
@property (nonatomic) BOOL videoIsPaused;
@property (retain, nonatomic) NSString *sdpString;
@property (retain, nonatomic) SDPMini *sdp;
@property (readonly, nonatomic) BOOL requiresImplicitFeatureString;
@property (readonly, nonatomic) BOOL isIOS;
@property (readonly, nonatomic) BOOL usesInitialFECImplementation;
@property (nonatomic) BOOL supportsDynamicMaxBitrate;
@property (nonatomic) BOOL supportsSKEOptimization;
@property (readonly, nonatomic) BOOL supportsSpecialAACBundle;
@property (nonatomic) unsigned int visibleRectCropping;
@property (readonly, nonatomic) BOOL useNewPLCalc;
@property (nonatomic) unsigned char u8Version;
@property (readonly) BOOL supportsDynamicContentsRectWithAspectPreservation;
@property (copy, nonatomic) NSString *frameworkVersion;
@property (copy, nonatomic) NSString *OSVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (nonatomic) BOOL isVideoQualityNearDegraded;

+ (unsigned char)getVCCurrentVersion;

- (void)setUserAgent:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)updateWithLastDecodedFrameTime:(double)a0 time:(double)a1;
- (struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; })audioVersionInfo:(BOOL)a0;
- (BOOL)supportSDPCompression;

@end
