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

- (void).cxx_destruct;
- (id)_defaultVoice;
- (id)defaultVoice;
- (id)serverVoiceNameForGender:(long long)a0;
- (id)defaultTypeString;
- (id)defaultFootprintString;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)key;
- (long long)defaultVoiceFootprint;
- (long long)defaultVoiceType;
- (long long)defaultVoiceGender;
- (void)encodeWithCoder:(id)a0;

@end
