@interface PHASEProcedureNodeDefinition : PHASEGeneratorNodeDefinition

@property (nonatomic) long long cullOption;
@property (nonatomic) long long playbackMode;
@property (readonly, nonatomic) int maxPolyphony;
@property (nonatomic) long long voiceStealingType;
@property (nonatomic) double referenceGainDbSpl;

+ (id)new;

- (id)init;
- (id)initInternal:(id)a0 maxPolyphony:(int)a1 voiceStealingType:(long long)a2;

@end
