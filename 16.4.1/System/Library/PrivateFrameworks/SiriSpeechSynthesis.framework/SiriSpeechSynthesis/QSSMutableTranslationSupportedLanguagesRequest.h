@class NSString;

@interface QSSMutableTranslationSupportedLanguagesRequest : QSSTranslationSupportedLanguagesRequest

@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *task;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
