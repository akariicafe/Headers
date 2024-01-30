@class NSString, NSArray;

@interface FTMutableTextToSpeechSpeechFeatureInputWord : FTTextToSpeechSpeechFeatureInputWord

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSArray *phonemes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
