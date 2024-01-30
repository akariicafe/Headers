@class NSString;

@interface SANPVideoSetDefaultAudioTrack : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *languageOptionChangeUserSetting;

+ (id)setDefaultAudioTrack;
+ (id)setDefaultAudioTrackWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
