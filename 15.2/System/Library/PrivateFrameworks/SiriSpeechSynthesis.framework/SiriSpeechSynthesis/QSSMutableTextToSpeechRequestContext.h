@class NSArray, NSString;

@interface QSSMutableTextToSpeechRequestContext : QSSTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
