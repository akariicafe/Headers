@class NSArray;

@interface QSSMutableTTSPhonemeSequence : QSSTTSPhonemeSequence

@property (copy, nonatomic) NSArray *word_phonemes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
