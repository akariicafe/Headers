@class CADisplay, UIScene, NSString, AVSecondScreenViewController, AVObservationController, AVPlayer;

@interface AVSecondScreenDebugAssistant : NSObject

@property (retain, nonatomic) CADisplay *debugInfoDisplay;
@property (retain, nonatomic) AVObservationController *observationController;
@property (retain, nonatomic) AVPlayer *player;
@property (weak, nonatomic) UIScene *scene;
@property (copy, nonatomic) NSString *debugText;
@property (weak, nonatomic) AVSecondScreenViewController *secondScreenViewController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_currentDisplay;
- (void)_actuallyUpdateDebugLabelTextWithCurrentResolution:(id)a0 currentVideoDynamicRange:(id)a1;
- (id)_currentEnabledVideoTrack;
- (id)_currentVideoDynamicRange;
- (void)_updateDebugLabelText;

@end
