@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *length;

+ (id)voiceMailWithDictionary:(id)a0 context:(id)a1;
+ (id)voiceMail;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
