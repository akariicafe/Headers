@class SASmsSms;

@interface SAUIShowSmsMessage : SAUISnippet

@property (nonatomic) BOOL showAsDraft;
@property (retain, nonatomic) SASmsSms *sms;

+ (id)showSmsMessage;
+ (id)showSmsMessageWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
