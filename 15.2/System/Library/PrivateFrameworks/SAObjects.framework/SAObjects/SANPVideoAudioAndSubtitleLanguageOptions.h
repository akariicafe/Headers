@class NSArray, NSString, SANPVideoLanguageOption;

@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *availableSubtitles;
@property (copy, nonatomic) NSArray *availableTracks;
@property (retain, nonatomic) SANPVideoLanguageOption *currentAudioTrack;
@property (retain, nonatomic) SANPVideoLanguageOption *currentSubtitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)audioAndSubtitleLanguageOptions;
+ (id)audioAndSubtitleLanguageOptionsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
