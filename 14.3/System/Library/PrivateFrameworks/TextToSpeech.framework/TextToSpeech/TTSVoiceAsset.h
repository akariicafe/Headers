@class NSString, NSArray;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *languages;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) long long footprint;
@property (readonly, nonatomic) BOOL neural;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isBuiltInVoice;
@property (retain, nonatomic) NSString *voicePath;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 languages:(id)a1 gender:(long long)a2 footprint:(long long)a3 isInstalled:(BOOL)a4 isBuiltIn:(BOOL)a5 masteredVersion:(id)a6 compatibilityVersion:(id)a7 neural:(BOOL)a8;

@end
