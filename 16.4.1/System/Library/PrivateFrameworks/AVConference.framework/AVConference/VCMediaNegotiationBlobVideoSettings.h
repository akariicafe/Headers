@class NSMutableArray;

@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying> {
    struct { unsigned char customVideoHeight : 1; unsigned char customVideoWidth : 1; unsigned char hdrModesSupported : 1; unsigned char pixelFormats : 1; unsigned char tilesPerFrame : 1; unsigned char ltrpEnabled : 1; } _has;
}

@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) BOOL allowRTCPFB;
@property (retain, nonatomic) NSMutableArray *videoPayloadCollections;
@property (nonatomic) BOOL hasCustomVideoWidth;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) BOOL hasCustomVideoHeight;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) BOOL hasTilesPerFrame;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic) BOOL hasLtrpEnabled;
@property (nonatomic) BOOL ltrpEnabled;
@property (nonatomic) BOOL hasPixelFormats;
@property (nonatomic) unsigned int pixelFormats;
@property (nonatomic) BOOL hasHdrModesSupported;
@property (nonatomic) unsigned int hdrModesSupported;

+ (unsigned int)hdrModesBitmapWithSupportedModes:(id)a0;
+ (unsigned int)storePixelFormatsInBitMap:(id)a0;
+ (Class)videoPayloadCollectionsType;

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
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)a0;
- (void)addVideoPayloadCollections:(id)a0;
- (void)checkAndInsertRuleWithWidth:(unsigned int)a0 height:(unsigned int)a1 framerate:(int)a2 payload:(int)a3 priority:(double)a4 negotiationBitfield:(unsigned int *)a5 negotiationBit:(unsigned int)a6 rules:(id)a7 isCellular16x9Capable:(BOOL)a8;
- (void)clearVideoPayloadCollections;
- (id)getPayloadSettingsForPayload:(int)a0;
- (id)initWithSSRC:(unsigned int)a0 allowRTCPFB:(BOOL)a1 videoRuleCollections:(id)a2 featureStrings:(id)a3 isCellular16x9Capable:(BOOL)a4 tilesPerFrame:(unsigned int)a5 ltrpEnabled:(BOOL)a6;
- (id)initWithScreenSSRC:(unsigned int)a0 allowRTCPFB:(BOOL)a1 videoRuleCollections:(id)a2 featureStrings:(id)a3 isCellular16x9Capable:(BOOL)a4 customVideoWidth:(unsigned int)a5 customVideoHeight:(unsigned int)a6 tilesPerFrame:(unsigned int)a7 ltrpEnabled:(BOOL)a8 pixelFormats:(id)a9 hdrModesSupported:(id)a10;
- (id)newFeatureStrings;
- (id)newVideoRuleCollectionsForScreen:(BOOL)a0 isCellular16x9Capable:(BOOL)a1 isLocalConfig:(BOOL)a2;
- (id)parameterSetStringFromPayloadSettings:(id)a0;
- (void)prepareFormatString:(id)a0 format:(id)a1 formatIndex:(unsigned int)a2 preferredFormat:(unsigned int)a3;
- (void)printScreenWithLogFile:(void *)a0;
- (void)printVideoWithLogFile:(void *)a0;
- (BOOL)setVideoRuleCollections:(id)a0 featureStrings:(id)a1 isScreen:(BOOL)a2 isCellular16x9Capable:(BOOL)a3;
- (unsigned long long)videoPayloadCollectionsCount;

@end
