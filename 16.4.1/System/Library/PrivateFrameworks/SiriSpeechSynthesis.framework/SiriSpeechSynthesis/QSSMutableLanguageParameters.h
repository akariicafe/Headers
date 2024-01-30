@class NSString;

@interface QSSMutableLanguageParameters : QSSLanguageParameters

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *request_locale;
@property (copy, nonatomic) NSString *fork_id;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
