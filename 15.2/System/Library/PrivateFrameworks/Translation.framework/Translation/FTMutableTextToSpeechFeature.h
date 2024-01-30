@class NSArray;

@interface FTMutableTextToSpeechFeature : FTTextToSpeechFeature

@property (copy, nonatomic) NSArray *normalized_text;
@property (copy, nonatomic) NSArray *phoneme_sequence;
@property (copy, nonatomic) NSArray *prompts;
@property (copy, nonatomic) NSArray *replacement;
@property (copy, nonatomic) NSArray *neural_phoneme_sequence;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
