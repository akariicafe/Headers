@class PTOutlet;

@interface SBHIconEditingSettings : PTSettings

@property (retain, nonatomic) PTOutlet *resetHomeScreenLayoutOutlet;
@property (nonatomic) BOOL showIndexLabels;
@property (nonatomic) BOOL showDragPlatterIconBorder;
@property (nonatomic) double editingLiftDelay;
@property (nonatomic) double longPressToEditDuration;
@property (nonatomic) BOOL waitForPause;
@property (nonatomic) double defaultPauseDuration;
@property (nonatomic) double fastEditingPauseDuration;
@property (nonatomic) double defaultSpringDampingRatio;
@property (nonatomic) double defaultSpringDuration;
@property (nonatomic) double clusterFastestDuration;
@property (nonatomic) double clusterSlowestDuration;
@property (nonatomic) double clusterMiddleFastDuration;
@property (nonatomic) double clusterMiddleSlowDuration;
@property (nonatomic) long long overrideAnimationType;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
