@class AVTStickerConfigurationProvider, AVTUILogger;
@protocol AVTAvatarStoreInternal;

@interface AVTStickerRecentsMigrator : NSObject

@property (retain, nonatomic) id<AVTAvatarStoreInternal> store;
@property (retain, nonatomic) AVTStickerConfigurationProvider *stickerConfigurationProvider;
@property (nonatomic) AVTUILogger *logger;
@property (nonatomic) BOOL migrationHasBeenPerformed;

- (void).cxx_destruct;
- (void)performMigrationIfNeeded;
- (id)initWithStore:(id)a0 stickerConfigurationProvider:(id)a1 environment:(id)a2;
- (void)setNeedsMigrationOnNextLaunch;

@end
