@class NSArray, NSString;

@interface OPTTSMutableTextToSpeechRequestContext : OPTTSTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
