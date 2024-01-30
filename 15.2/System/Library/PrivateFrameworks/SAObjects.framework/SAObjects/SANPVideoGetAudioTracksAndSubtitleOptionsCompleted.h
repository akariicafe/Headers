@class SANPVideoAudioAndSubtitleLanguageOptions, NSString;

@interface SANPVideoGetAudioTracksAndSubtitleOptionsCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SANPVideoAudioAndSubtitleLanguageOptions *languageOptions;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAudioTracksAndSubtitleOptionsCompleted;
+ (id)getAudioTracksAndSubtitleOptionsCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
