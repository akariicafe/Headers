@class NSString, NSArray;

@interface QSSMutableTextToSpeechSpeechFeatureInputWord : QSSTextToSpeechSpeechFeatureInputWord

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSArray *phonemes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
