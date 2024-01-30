@class VCMediaNegotiationBlobMomentsSettings, VCMediaNegotiationBlobVideoSettings, NSString, VCMediaNegotiationFaceTimeSettings, VCMediaNegotiationBlobCaptionsSettings, VCMediaNegotiationBlobAudioSettings, NSMutableArray;

@interface VCMediaNegotiationBlob : PBCodable <NSCopying> {
    struct { unsigned char ntpTime : 1; unsigned char basebandCodecSampleRate : 1; unsigned char blobVersion : 1; unsigned char mediaControlInfoVersion : 1; unsigned char allowDynamicMaxBitrate : 1; unsigned char allowsContentsChangeWithAspectPreservation : 1; } _has;
}

@property (nonatomic) BOOL hasAllowDynamicMaxBitrate;
@property (nonatomic) BOOL allowDynamicMaxBitrate;
@property (nonatomic) BOOL hasAllowsContentsChangeWithAspectPreservation;
@property (nonatomic) BOOL allowsContentsChangeWithAspectPreservation;
@property (readonly, nonatomic) BOOL hasAudioSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobAudioSettings *audioSettings;
@property (readonly, nonatomic) BOOL hasVideoSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *videoSettings;
@property (readonly, nonatomic) BOOL hasScreenSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobVideoSettings *screenSettings;
@property (readonly, nonatomic) BOOL hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) BOOL hasBasebandCodec;
@property (retain, nonatomic) NSString *basebandCodec;
@property (nonatomic) BOOL hasBasebandCodecSampleRate;
@property (nonatomic) unsigned int basebandCodecSampleRate;
@property (retain, nonatomic) NSMutableArray *bandwidthSettings;
@property (readonly, nonatomic) BOOL hasCaptionsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobCaptionsSettings *captionsSettings;
@property (retain, nonatomic) NSMutableArray *multiwayAudioStreams;
@property (readonly, nonatomic) BOOL hasMomentsSettings;
@property (retain, nonatomic) VCMediaNegotiationBlobMomentsSettings *momentsSettings;
@property (nonatomic) BOOL hasNtpTime;
@property (nonatomic) unsigned long long ntpTime;
@property (nonatomic) BOOL hasBlobVersion;
@property (nonatomic) unsigned int blobVersion;
@property (retain, nonatomic) NSMutableArray *multiwayVideoStreams;
@property (nonatomic) BOOL hasMediaControlInfoVersion;
@property (nonatomic) unsigned int mediaControlInfoVersion;
@property (readonly, nonatomic) BOOL hasFaceTimeSettings;
@property (retain, nonatomic) VCMediaNegotiationFaceTimeSettings *faceTimeSettings;

+ (Class)bandwidthSettingsType;
+ (Class)multiwayAudioStreamsType;
+ (Class)multiwayVideoStreamType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addMultiwayVideoStream:(id)a0;
- (void)addBandwidthSettings:(id)a0;
- (void)addMultiwayAudioStreams:(id)a0;
- (unsigned long long)bandwidthSettingsCount;
- (void)clearBandwidthSettings;
- (id)bandwidthSettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)multiwayAudioStreamsCount;
- (void)clearMultiwayAudioStreams;
- (id)multiwayAudioStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)multiwayVideoStreamsCount;
- (void)clearMultiwayVideoStreams;
- (id)multiwayVideoStreamAtIndex:(unsigned long long)a0;
- (void)printWithTitle:(id)a0 blobSize:(unsigned int)a1 logFile:(void *)a2;
- (void)formatBandwidthConfig:(int)a0 maxBanxwidth:(unsigned int)a1 bandwidthString:(id)a2;
- (void)printBandwidthSettingsWithLogFile:(void *)a0;
- (void)printCaptionsSettingsWithLogFile:(void *)a0;
- (void)printMomentsSettingsWithLogFile:(void *)a0;
- (void)printMultiwayAudioStreamsWithLogFile:(void *)a0;
- (void)printMultiwayVideoStreamsWithLogFile:(void *)a0;

@end
