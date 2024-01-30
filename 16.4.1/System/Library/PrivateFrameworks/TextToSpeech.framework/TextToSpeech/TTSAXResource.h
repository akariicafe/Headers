@class TTSSpeechVoice, NSString, NSArray, AXAsset, TTSVoiceAsset;

@interface TTSAXResource : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) TTSSpeechVoice *speechVoice;
@property (retain, nonatomic) NSString *synthesizerBundleIdentifier;
@property (retain, nonatomic) NSString *componentSubType;
@property (nonatomic) long long footprint;
@property (nonatomic) unsigned long long assetSize;
@property (nonatomic) BOOL isInstalled;
@property (nonatomic) BOOL canBeDownloaded;
@property (nonatomic) long long memoryPeak;
@property (retain, nonatomic) AXAsset *axAsset;
@property (retain, nonatomic) TTSVoiceAsset *voiceAsset;
@property (readonly, nonatomic) NSArray *languages;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameWithFootprint;
@property (readonly, nonatomic) NSString *voiceId;
@property (readonly, nonatomic) NSString *contentPath;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long subtype;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) BOOL isNoveltyVoice;

- (id)initWithData:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)localizedStringForKey:(id)a0;
- (void)_ensureMacinTalkComponent;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isDefault;
- (id)primaryLanguage;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldFilterResourceFromUI;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_resourceSubtypeFromStringInput:(id)a0;
- (BOOL)_isSystemVoice;
- (BOOL)memoryPeakExceedsActiveJetsamLimit;
- (unsigned long long)_resourceTypeFromStringInput:(id)a0;
- (long long)_resourceFootprintFromStringInput:(id)a0;
- (id)description;
- (long long)_resourceGenderFromStringInput:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDennisVoice;

@end
