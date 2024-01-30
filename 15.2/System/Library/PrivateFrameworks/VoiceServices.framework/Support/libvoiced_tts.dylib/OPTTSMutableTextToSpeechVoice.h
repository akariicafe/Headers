@class NSString;

@interface OPTTSMutableTextToSpeechVoice : OPTTSTextToSpeechVoice

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *type;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
