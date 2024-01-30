@class NSString, NSArray, AVPlaybackSpeedCollection, AVRoutingConfiguration, AVMobileFullscreenController, AVControlEventManager, AVPictureInPictureController, AVPlayerController;
@protocol AVMobileControlsViewControllerDelegate, AVKitLayoutItem, AVVolumeController;

@interface AVMobileControlsViewController : UIViewController <AVControlEventPublishing> {
    AVControlEventManager *_eventManager;
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

- (void)flashControlsWithDuration:(double)a0;
- (void)updateVisibilityPolicy:(unsigned long long)a0 animated:(BOOL)a1;
- (void)addAction:(SEL)a0 withTarget:(id)a1 forControlEvent:(id)a2;
- (void)toggleVisibility:(id)a0;
- (id)eventManager;
- (id)init;
- (void).cxx_destruct;

@end
