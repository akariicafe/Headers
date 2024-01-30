@class NSDictionary, NSArray, NSURL;

@interface VSVoiceResourceAsset : VSAssetBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *voiceConfig;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSDictionary *vocalizerConfig;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *resourceList;
@property (copy, nonatomic) NSDictionary *resourceMimeTypes;
@property (copy, nonatomic) NSURL *searchPathURL;

+ (id)resourceFromTrial:(id)a0;

- (id)defaultVoiceNameForGender:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)key;
- (id)description;
- (id)_defaultVoices;
- (long long)defaultVoiceGender;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)defaultVoiceType;
- (id)defaultVoice;

@end
