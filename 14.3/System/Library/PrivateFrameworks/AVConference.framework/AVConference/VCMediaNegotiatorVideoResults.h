@class VCVideoRuleCollections, NSMutableDictionary, NSMutableSet;

@interface VCMediaNegotiatorVideoResults : NSObject

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

- (id)init;
- (void)dealloc;
- (void)addVideoRules:(id)a0 transportType:(unsigned char)a1 payload:(int)a2 encodingType:(unsigned char)a3;
- (void)addFeatureString:(id)a0 key:(id)a1;
- (void)addParameterSet:(id)a0 key:(id)a1;
- (void)addPixelFormatSet:(id)a0;

@end
