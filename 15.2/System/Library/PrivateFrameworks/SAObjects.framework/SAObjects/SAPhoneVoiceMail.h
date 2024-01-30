@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *length;

+ (id)voiceMail;
+ (id)voiceMailWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
