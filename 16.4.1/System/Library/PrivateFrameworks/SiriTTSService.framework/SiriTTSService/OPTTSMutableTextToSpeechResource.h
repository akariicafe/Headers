@class NSString;

@interface OPTTSMutableTextToSpeechResource : OPTTSTextToSpeechResource

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
