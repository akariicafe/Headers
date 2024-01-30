@class NSDistributedNotificationCenter;
@protocol JFXRemoteCommandServerDelegate;

@interface JFXRemoteCommandServer : NSObject

@property (weak, nonatomic) id<JFXRemoteCommandServerDelegate> delegate;
@property (retain, nonatomic) NSDistributedNotificationCenter *distributedNotificationCenter;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)onAddAREffectWithIdentifierNotification:(id)a0;
- (void)onAddEffectWithIdentifierNotification:(id)a0;
- (void)onAddEffectWithNameNotification:(id)a0;
- (void)onAddPosterWithIdentifierNotification:(id)a0;
- (void)onAddPosterWithNameNotification:(id)a0;
- (void)onAddShapeWithIdentifierNotification:(id)a0;
- (void)onAddStickerNotification:(id)a0;
- (void)onAddStickerWithIdentifierNotification:(id)a0;
- (void)onAddTextNotification:(id)a0;
- (void)onExportProjectNotification:(id)a0;
- (void)onExportProjectResponseNotification:(id)a0;
- (void)onGetEffectsRequest:(id)a0;
- (void)onGetEffectsResponse:(id)a0;
- (void)onNewProjectNotification:(id)a0;
- (void)onOpenProjectNotification:(id)a0;
- (void)onOpenProjectPickerNotification:(id)a0;
- (void)onPlayClipAtIndexNotification:(id)a0;
- (void)onPlayNotification:(id)a0;
- (void)onRecordNotification:(id)a0;
- (void)onRemoveEffectsNotification:(id)a0;
- (void)onSetAnimojiNotification:(id)a0;
- (void)onSetAspectRatioNotification:(id)a0;
- (void)onSetFilterWithIdentifierNotification:(id)a0;
- (void)onSetMemojiWithContentsOfFileNotification:(id)a0;

@end
