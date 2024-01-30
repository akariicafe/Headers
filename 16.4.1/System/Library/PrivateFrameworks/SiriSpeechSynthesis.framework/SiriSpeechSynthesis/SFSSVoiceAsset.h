@class NSString;

@interface SFSSVoiceAsset : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) long long footprint;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long contentVersion;
@property (copy, nonatomic) NSString *assetPath;

+ (id)generateVoiceAssetFromVoiceKeyString:(id)a0;

- (id)key;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)init:(id)a0 gender:(long long)a1 name:(id)a2 type:(long long)a3 footprint:(long long)a4 contentVersion:(long long)a5;

@end
