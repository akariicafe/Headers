@class NSArray, NSString;

@interface FTMutableTextToSpeechRequestContext : FTTextToSpeechRequestContext

@property (copy, nonatomic) NSArray *context_info;
@property (copy, nonatomic) NSString *dialog_identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
