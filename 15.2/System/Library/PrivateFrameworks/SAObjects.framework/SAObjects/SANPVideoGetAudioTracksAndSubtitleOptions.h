@class NSString;

@interface SANPVideoGetAudioTracksAndSubtitleOptions : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredLanguage;

+ (id)getAudioTracksAndSubtitleOptions;
+ (id)getAudioTracksAndSubtitleOptionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
