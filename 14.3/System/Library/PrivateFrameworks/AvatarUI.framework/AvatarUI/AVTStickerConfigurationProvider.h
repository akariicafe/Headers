@class NSCache, AVTUIEnvironment, NSArray;
@protocol AVTStickerPack;

@interface AVTStickerConfigurationProvider : NSObject

@property (retain, nonatomic) NSCache *stickerConfigurationCache;
@property (retain, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) NSArray<AVTStickerPack> *stickerPacks;

- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 forStickerPacks:(id)a1;
- (id)stickerConfigurationForAvatarRecord:(id)a0 stickerName:(id)a1;
- (id)stickerConfigurationsForAvatarRecord:(id)a0;
- (id)availableStickerNamesForAvatarRecord:(id)a0;

@end
