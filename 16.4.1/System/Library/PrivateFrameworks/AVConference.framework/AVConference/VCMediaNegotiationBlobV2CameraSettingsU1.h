@class VCVideoRuleCollections, NSMutableArray;

@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable <NSCopying> {
    struct { unsigned char landscapeAspectRatioX : 1; unsigned char landscapeAspectRatioY : 1; unsigned char mismatchedDisplayAspectRatioX : 1; unsigned char mismatchedDisplayAspectRatioY : 1; unsigned char portraitAspectRatioX : 1; unsigned char portraitAspectRatioY : 1; unsigned char rtpSSRC : 1; } _has;
}

@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } orientationMismatchDisplayRatio;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) unsigned int rtpSSRC;
@property (retain, nonatomic) NSMutableArray *payloads;
@property (nonatomic) BOOL hasLandscapeAspectRatioX;
@property (nonatomic) unsigned int landscapeAspectRatioX;
@property (nonatomic) BOOL hasLandscapeAspectRatioY;
@property (nonatomic) unsigned int landscapeAspectRatioY;
@property (nonatomic) BOOL hasPortraitAspectRatioX;
@property (nonatomic) unsigned int portraitAspectRatioX;
@property (nonatomic) BOOL hasPortraitAspectRatioY;
@property (nonatomic) unsigned int portraitAspectRatioY;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioX;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioX;
@property (nonatomic) BOOL hasMismatchedDisplayAspectRatioY;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioY;

+ (Class)payloadsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addPayloads:(id)a0;
- (BOOL)addVideoRules:(id)a0 encodingType:(unsigned char)a1 payload:(int)a2 videoRuleCollections:(id)a3;
- (void)aspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a0 aspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a1 orientationMismatchAspectRatioLandscape:(struct CGSize { double x0; double x1; } *)a2 orientationMismatchAspectRatioPortrait:(struct CGSize { double x0; double x1; } *)a3 screenSize:(struct CGSize { double x0; double x1; })a4;
- (void)clearPayloads;
- (id)initWithSSRC:(unsigned int)a0 videoRuleCollections:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2 aspectRatioPortrait:(struct CGSize { double x0; double x1; })a3 aspectRatioLandscape:(struct CGSize { double x0; double x1; })a4 orientationMismatchAspectRatioLandscape:(struct CGSize { double x0; double x1; })a5;
- (id)payloadsAtIndex:(unsigned long long)a0;
- (unsigned long long)payloadsCount;
- (void)printWithLogFile:(void *)a0 prefix:(id)a1 screenSize:(struct CGSize { double x0; double x1; })a2;
- (id)rulesForEncodeType:(unsigned char)a0 paylaod:(int)a1 videoRuleCollection:(id)a2;
- (BOOL)setupVideoRuleCollection:(id)a0;

@end
