@class NSString;

@interface SANPVideoGetAudioTracksAndSubtitleOptions : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredLanguage;

+ (id)getAudioTracksAndSubtitleOptions;
+ (id)getAudioTracksAndSubtitleOptionsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
