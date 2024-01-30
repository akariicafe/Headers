@class NSString;

@interface SANPVideoSetAutoSubtitles : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)setAutoSubtitles;
+ (id)setAutoSubtitlesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
