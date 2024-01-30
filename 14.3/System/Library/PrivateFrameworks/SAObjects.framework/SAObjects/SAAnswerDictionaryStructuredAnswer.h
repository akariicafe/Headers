@class NSString, NSArray, NSURL;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSArray *definitionGroups;
@property (copy, nonatomic) NSString *phoneticPronunciation;
@property (copy, nonatomic) NSURL *sound;
@property (copy, nonatomic) NSArray *syllables;
@property (copy, nonatomic) NSString *word;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryStructuredAnswer;
+ (id)dictionaryStructuredAnswerWithDictionary:(id)a0 context:(id)a1;

@end
