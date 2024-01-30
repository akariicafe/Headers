@class VCVideoRuleCollections, NSMutableDictionary, NSMutableSet;

@interface VCMediaNegotiatorResultsVideo : NSObject

@property (nonatomic) BOOL isSupported;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) BOOL isRTCPFBEnabled;
@property (readonly, nonatomic) VCVideoRuleCollections *videoRuleCollections;
@property (retain, nonatomic) NSMutableDictionary *featureStrings;
@property (retain, nonatomic) NSMutableDictionary *parameterSets;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic) BOOL ltrpEnabled;
@property (readonly, nonatomic) NSMutableSet *pixelFormats;
@property (readonly, nonatomic) NSMutableSet *hdrModesNegotiated;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addFeatureString:(id)a0 payload:(int)a1;
- (void)addNegotiatedHDRMode:(id)a0;
- (void)addParameterSet:(id)a0 payload:(int)a1;
- (void)addPixelFormatSet:(id)a0;
- (void)addVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;

@end
