@class NSArray, NSMutableDictionary, NSMutableSet;

@interface VCAudioStreamConfig : VCMediaStreamConfig {
    NSMutableSet *_supportedNumRedundantPayload;
}

@property (nonatomic) long long audioStreamMode;
@property (nonatomic) unsigned long long ptime;
@property (nonatomic) unsigned long long maxPtime;
@property (readonly, nonatomic) NSMutableDictionary *codecConfigurations;
@property (readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (readonly, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR;
@property (nonatomic) BOOL forceEVSWideBand;
@property (nonatomic) float volume;
@property (nonatomic) BOOL shouldApplyRedAsBoolean;

- (id)init;
- (void)dealloc;
- (id)initWithClientDictionary:(id)a0;
- (void)addCodecConfiguration:(id)a0;
- (void)setupRedWithRxPayload:(unsigned int)a0 txPayload:(unsigned int)a1;
- (void)addSupportedNumRedundantPayload:(unsigned int)a0;
- (BOOL)setupCodecWithClientDictionary:(id)a0;
- (BOOL)setupCNCodecWithClientDictionary:(id)a0;
- (BOOL)setupDTMFCodecWithClientDictionary:(id)a0;

@end
