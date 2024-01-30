@class NSString;

@interface SANPVideoTurnOnSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredOptionId;
@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)turnOnSubtitles;
+ (id)turnOnSubtitlesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
