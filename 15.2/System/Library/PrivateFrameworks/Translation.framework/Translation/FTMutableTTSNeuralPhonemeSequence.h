@class NSArray;

@interface FTMutableTTSNeuralPhonemeSequence : FTTTSNeuralPhonemeSequence

@property (copy, nonatomic) NSArray *phonemes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
