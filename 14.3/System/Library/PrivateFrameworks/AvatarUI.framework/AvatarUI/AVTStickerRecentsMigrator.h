@class AVTStickerConfigurationProvider, AVTUILogger;
@protocol AVTAvatarStoreInternal;

@interface AVTStickerRecentsMigrator : NSObject

@property (retain, nonatomic) id<AVTAvatarStoreInternal> store;
@property (retain, nonatomic) AVTStickerConfigurationProvider *stickerConfigurationProvider;
@property (nonatomic) AVTUILogger *logger;
@property (nonatomic) BOOL migrationHasBeenPerformed;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0 stickerConfigurationProvider:(id)a1 environment:(id)a2;
- (void)performMigrationIfNeeded;
- (void)setNeedsMigrationOnNextLaunch;

@end
