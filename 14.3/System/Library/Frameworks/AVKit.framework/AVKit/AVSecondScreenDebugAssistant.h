@class CADisplay, UIScene, NSString, AVSecondScreenViewController, AVObservationController, AVPlayer;

@interface AVSecondScreenDebugAssistant : NSObject

@property (retain, nonatomic) CADisplay *debugInfoDisplay;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) UIScene *scene;
@property (copy, nonatomic) NSString *debugText;
@property (weak, nonatomic) AVSecondScreenViewController *secondScreenViewController;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_currentEnabledVideoTrack;
- (id)_currentDisplay;
- (id)_currentVideoDynamicRange;
- (void)_updateDebugLabelText;
- (void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)a0 currentVideoDynamicRange:(id)a1;

@end
