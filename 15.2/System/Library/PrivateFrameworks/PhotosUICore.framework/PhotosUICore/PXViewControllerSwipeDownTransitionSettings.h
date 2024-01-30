@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings

@property (nonatomic) BOOL allowSwipeDown;
@property (nonatomic) double minimumDimmingOpacity;
@property (retain, nonatomic) PXSwipeDownSettings *swipeDownSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)createChildren;
- (void)setDefaultValues;
- (id)parentSettings;
- (void).cxx_destruct;

@end
