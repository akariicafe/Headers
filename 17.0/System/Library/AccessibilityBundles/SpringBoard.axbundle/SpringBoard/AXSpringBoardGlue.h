@interface AXSpringBoardGlue : NSObject

@property (readonly, nonatomic, getter=isUILocked) BOOL UILocked;
@property (readonly, nonatomic) int lastLockSource;

+ (BOOL)isBuddyRunning;
+ (id)sharedInstance;
+ (void)accessibilityInitializeBundle;
+ (int)applicationOrientation;
+ (BOOL)_isSessionLoginSession;
+ (BOOL)_showingBuddyLockScreen;
+ (BOOL)canShowAXInfoPanel;
+ (void)handleOrientationChange;
+ (void)removeVoiceOverInfoPanel:(double)a0;
+ (void)resetCanShowAXInfoPanel;
+ (void)toggleVoiceOverInfoPanel;

- (BOOL)isDimmed;
- (void)_accessibilitySetAllowShowNotificationGestureOverride:(BOOL)a0;
- (BOOL)_accessibilityAllowShowNotificationGestureOverride;
- (BOOL)_axIsAppLibraryOrTodayViewPresent;
- (BOOL)_axIsCoverSheetTodayViewControllerPresent;

@end
