@class NSString;

@interface SANPVideoTurnOffSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)turnOffSubtitles;
+ (id)turnOffSubtitlesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
