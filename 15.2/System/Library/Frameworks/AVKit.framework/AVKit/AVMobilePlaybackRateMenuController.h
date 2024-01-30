@class UIMenu, NSArray, AVPlaybackRate, AVObservationController, AVPlaybackRateCollection;

@interface AVMobilePlaybackRateMenuController : NSObject {
    AVObservationController *_observationController;
    UIMenu *_playbackRateMenu;
    NSArray *_activeMenuItems;
    AVPlaybackRateCollection *_activePlaybackRateCollection;
    AVPlaybackRate *_activeSelectedPlaybackRate;
    BOOL _activeMenuHasImage;
}

@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (readonly, nonatomic) UIMenu *menu;

+ (void)_loadPlaybackSpeedControlImageWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_reconstructPlaybackRateMenuItems;
- (void)_updatePlaybackRateMenuIfNeeded;
- (void)_updatePlaybackRateMenuItemStatesIfNeeded;

@end
