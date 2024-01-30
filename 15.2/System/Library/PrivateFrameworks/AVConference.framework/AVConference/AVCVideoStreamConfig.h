@class NSString;

@interface AVCVideoStreamConfig : NSObject

@property (nonatomic) long long txCodecType;
@property (nonatomic) long long rxCodecType;
@property (nonatomic) long long videoResolution;
@property (nonatomic) unsigned long long framerate;
@property (nonatomic) unsigned long long txMaxBitrate;
@property (nonatomic) unsigned long long txMinBitrate;
@property (nonatomic) unsigned long long rxMaxBitrate;
@property (nonatomic) unsigned long long rxMinBitrate;
@property (retain, nonatomic) NSString *rxCodecFeatureListString;
@property (retain, nonatomic) NSString *txCodecFeatureListString;
@property (nonatomic) unsigned long long keyFrameInterval;
@property (nonatomic) int remoteVideoInitialOrientation;
@property (nonatomic) BOOL enableCVO;
@property (nonatomic) unsigned long long cvoExtensionID;
@property (nonatomic) BOOL isVideoProtected;
@property (nonatomic) long long videoStreamMode;
@property (nonatomic) long long captureSource;
@property (nonatomic) unsigned long long screenDisplayID;
@property (nonatomic) unsigned long long customWidth;
@property (nonatomic) unsigned long long customHeight;
@property (nonatomic) unsigned long long tilesPerFrame;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic, getter=isLTRPEnabled) BOOL ltrpEnabled;
@property (nonatomic) unsigned long long hdrMode;
@property (retain, nonatomic) NSString *remoteDeviceName;
@property (nonatomic, getter=isLatencySensitiveModeEnabled) BOOL latencySensitiveModeEnabled;
@property (retain, nonatomic) NSString *profileLevel;

+ (long long)clientCodecTypeWithCodecType:(long long)a0;
+ (long long)codecTypeWithClientCodecType:(long long)a0;
+ (BOOL)isPixelFormatValid:(unsigned int)a0 hdrMode:(unsigned long long)a1;
+ (long long)clientVideoResolutionFromResolution:(long long)a0;
+ (long long)clientVideoStreamModeFromVideoStreamType:(long long)a0;
+ (long long)clientVideoCaptureSourceFromCaptureSource:(int)a0;
+ (long long)videoResolutionFromClientResolution:(long long)a0;
+ (long long)videoStreamTypeFromClientVideoStreamMode:(long long)a0;
+ (int)videoCaptureSourceFromClientCaptureSource:(long long)a0;

- (id)init;
- (id)dictionary;
- (void)dealloc;
- (void)setUpWithDictionary:(id)a0;
- (BOOL)isValidForDirection:(long long)a0;

@end
