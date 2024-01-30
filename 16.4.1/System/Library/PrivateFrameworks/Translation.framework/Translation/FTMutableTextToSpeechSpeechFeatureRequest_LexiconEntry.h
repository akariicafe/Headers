@class NSString, FTTextToSpeechSpeechFeatureInputPhonemeSequence;

@interface FTMutableTextToSpeechSpeechFeatureRequest_LexiconEntry : FTTextToSpeechSpeechFeatureRequest_LexiconEntry

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) FTTextToSpeechSpeechFeatureInputPhonemeSequence *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
