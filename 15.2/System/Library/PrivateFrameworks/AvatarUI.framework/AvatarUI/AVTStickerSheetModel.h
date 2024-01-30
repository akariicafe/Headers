@class AVTUIStickerRenderer, NSArray, AVTUIEnvironment, AVTUIStickerPlaceholderProviderFactory;
@protocol AVTAvatarRecord, AVTTaskScheduler;

@interface AVTStickerSheetModel : NSObject

@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly, nonatomic) id<AVTTaskScheduler> taskScheduler;
@property (readonly, nonatomic) AVTUIStickerRenderer *stickerRenderer;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) AVTUIStickerPlaceholderProviderFactory *placeholderProviderFactory;
@property (readonly, copy, nonatomic) NSArray *stickerItems;

+ (id)sheetModelForAvatarRecord:(id)a0 withConfigurations:(id)a1 cache:(id)a2 taskScheduler:(id)a3 renderingQueue:(id)a4 encodingQueue:(id)a5 stickerGeneratorPool:(id)a6 imageProvider:(id)a7 environment:(id)a8;

- (void).cxx_destruct;
- (id)initWithAvatarRecord:(id)a0 stickerItems:(id)a1 stickerRenderer:(id)a2 taskScheduler:(id)a3 placeholderProviderFactory:(id)a4 environment:(id)a5;

@end
