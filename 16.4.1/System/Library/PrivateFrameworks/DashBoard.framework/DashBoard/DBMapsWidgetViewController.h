@class BKSAnimationFenceHandle, BSAnimationSettings, NSArray;
@protocol DBWidgetSizeManaging;

@interface DBMapsWidgetViewController : DBWidgetSceneViewController

@property (weak, nonatomic) id<DBWidgetSizeManaging> widgetSizeManager;
@property (retain, nonatomic) BKSAnimationFenceHandle *pendingFenceHandle;
@property (retain, nonatomic) BSAnimationSettings *pendingAnimationSettings;
@property (retain, nonatomic) NSArray *availableWidgetSizes;

- (id)sceneID;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)clientSetWantsLargeSize:(BOOL)a0 fenceHandle:(id)a1 animationSettings:(id)a2;
- (void)connectionReady;
- (id)initWithEnvironment:(id)a0 animationManager:(id)a1 widgetSizeManager:(id)a2;
- (void)prepareLoadingViewAnimated:(BOOL)a0;
- (void)setWantsLargeSize:(BOOL)a0;
- (void)updateAppearanceForWallpaper;

@end
