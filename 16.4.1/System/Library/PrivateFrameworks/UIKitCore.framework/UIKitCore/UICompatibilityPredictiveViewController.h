@class NSArray, NSString, UIView;

@interface UICompatibilityPredictiveViewController : UIViewController <UIPredictiveViewController>

@property (retain, nonatomic) UIView *customView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)hidesExpandableButton;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (BOOL)requiresKeyboard;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
