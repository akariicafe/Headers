@class AVPlaybackSpeedCollection, NSArray, AVPlaybackSpeed, AVObservationController, UIMenu;

@interface AVMobilePlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    UIMenu *_playbackRateMenu;
    NSArray *_activeMenuItems;
    AVPlaybackSpeedCollection *_activePlaybackRateCollection;
    AVPlaybackSpeed *_activeSelectedPlaybackSpeed;
    BOOL _activeMenuHasImage;
}

@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (readonly, nonatomic) UIMenu *menu;

+ (void)_loadPlaybackSpeedControlImageWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void)dealloc;
- (void)_reconstructPlaybackRateMenuItems;
- (void)_updatePlaybackRateMenuIfNeeded;
- (void).cxx_destruct;
- (void)_updatePlaybackRateMenuItemStatesIfNeeded;

@end
