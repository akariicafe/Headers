@class NSString;

@interface PHASESamplerNodeDefinition : PHASEGeneratorNodeDefinition

@property (readonly, nonatomic) NSString *assetUID;
@property (nonatomic) long long playbackType;
@property (readonly, nonatomic) NSString *assetIdentifier;
@property (nonatomic) long long cullOption;
@property (nonatomic) long long playbackMode;

+ (id)new;

- (void)setPlaybackType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSoundAssetIdentifier:(id)a0 mixerDefinition:(id)a1 identifier:(id)a2;
- (id)initWithSoundAssetIdentifier:(id)a0 mixerDefinition:(id)a1;
- (id)initWithSoundAssetUID:(id)a0 mixerDefinition:(id)a1 uid:(id)a2;
- (id)initWithSoundAssetUID:(id)a0 mixerDefinition:(id)a1;

@end
