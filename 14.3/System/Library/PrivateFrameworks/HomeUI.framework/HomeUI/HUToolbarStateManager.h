@class NSMutableArray;
@protocol HUToolbarStateManagerDelegate;

@interface HUToolbarStateManager : NSObject

@property (retain, nonatomic) NSMutableArray *pushedViewControllerStack;
@property (weak, nonatomic) id<HUToolbarStateManagerDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldRestoreToolbarButtons;
- (void)restoreStandardToolbarItems;
- (id)_instanceForBackButtonValues;
- (void)showBackButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)showSettingsButtonWithTarget:(id)a0 action:(SEL)a1;
- (void)willPresentModalViewController:(id)a0;
- (void)willDismissModalViewController:(id)a0;

@end
