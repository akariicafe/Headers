@class NSString, NSArray, AVPlaybackSpeedCollection, AVEventManager, AVRoutingConfiguration, AVMobileFullscreenController, AVPictureInPictureController, AVPlayerController;
@protocol AVMobileControlsViewControllerDelegate, AVKitLayoutItem, AVVolumeController;

@interface AVMobileControlsViewController : UIViewController <AVEventPublishing> {
    AVEventManager *_eventManager;
}

@property (nonatomic) unsigned long long visibilityPolicy;
@property (nonatomic) unsigned long long visibileControls;
@property (weak, nonatomic) id<AVMobileControlsViewControllerDelegate> delegate;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPictureInPictureController *pipController;
@property (retain, nonatomic) AVMobileFullscreenController *fullscreenController;
@property (retain, nonatomic) id<AVVolumeController> volumeController;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection;
@property (nonatomic) BOOL requiresLinearPlayback;
@property (retain, nonatomic) AVRoutingConfiguration *routingConfiguration;
@property (copy, nonatomic) NSArray *transportBarCustomMenuItems;
@property (copy, nonatomic) NSArray *controlItems;
@property (nonatomic) BOOL optimizeForPerformance;
@property (nonatomic) unsigned long long excludedControls;
@property (nonatomic) unsigned long long includedControls;
@property (nonatomic) unsigned long long secondaryPlaybackControlsType;
@property (readonly, nonatomic) id<AVKitLayoutItem> transportControlsLayoutItem;
@property (readonly, nonatomic) id<AVKitLayoutItem> volumeControlsLayoutItem;
@property (readonly, nonatomic) id<AVKitLayoutItem> displayModeControlsLayoutItem;
@property (nonatomic) BOOL showsFullScreenControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)autoHideInterval;

- (id)controlsViewControllerIfChromed;
- (id)init;
- (void)flashControlsWithDuration:(double)a0;
- (void)didEndIndirectUserInteraction;
- (void)removeAction:(SEL)a0 withTarget:(id)a1 forEvent:(id)a2;
- (void)didBeginIndirectUserInteraction;
- (void)addAction:(id /* block */)a0 forEvent:(id)a1;
- (void)toggleVisibility:(id)a0;
- (void).cxx_destruct;
- (void)addAction:(SEL)a0 withTarget:(id)a1 forEvent:(id)a2;
- (id)controlsViewControllerIfChromeless;
- (void)updateVisibilityPolicy:(unsigned long long)a0 animated:(BOOL)a1;
- (id)eventManager;

@end
