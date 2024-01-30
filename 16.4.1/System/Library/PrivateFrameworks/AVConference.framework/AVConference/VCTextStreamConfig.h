@interface VCTextStreamConfig : VCMediaStreamConfig

@property (readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled;
@property (nonatomic) unsigned char numRedundantPayloads;
@property (nonatomic) float txIntervalMin;

- (BOOL)setupCodecWithClientDictionary:(id)a0;
- (id)initWithClientDictionary:(id)a0;

@end
