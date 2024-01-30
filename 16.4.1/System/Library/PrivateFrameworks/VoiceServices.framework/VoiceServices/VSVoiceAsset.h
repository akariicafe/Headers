@class NSString, NSArray;

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *languages;
@property (nonatomic) long long gender;
@property (nonatomic) long long footprint;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isInstalled;
@property (nonatomic) BOOL isBuiltInVoice;
@property (nonatomic) BOOL isVoiceReadyToUse;

+ (id)footprintStringFromFootprint:(long long)a0;
+ (long long)footprintFromString:(id)a0;
+ (id)typeStringFromType:(long long)a0;
+ (id)genderStringFromGender:(long long)a0;
+ (long long)genderFromString:(id)a0;
+ (id)languagesFromMobileAssetAttributes:(id)a0;
+ (id)compatibilityVersionFromMobileAssetAttributes:(id)a0;
+ (long long)typeFromString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)descriptiveKey;
- (void).cxx_destruct;
- (id)nameKey;
- (void)amendNameVersionAndSizeWithMobileAssetAttributes:(id)a0;
- (id)initFromMobileAssetAttributes:(id)a0;
- (id)voiceKey;

@end
