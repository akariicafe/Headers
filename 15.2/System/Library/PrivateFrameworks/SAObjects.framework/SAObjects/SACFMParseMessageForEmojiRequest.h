@class NSString;

@interface SACFMParseMessageForEmojiRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *messageText;

+ (id)parseMessageForEmojiRequest;
+ (id)parseMessageForEmojiRequestWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
