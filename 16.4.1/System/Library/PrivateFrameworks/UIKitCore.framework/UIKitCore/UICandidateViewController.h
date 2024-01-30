@class NSArray, NSString, UIView;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController>

@property (retain, nonatomic) UIView *candidateView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredCandidateBarHeightForTraitCollection:(id)a0;

- (long long)overrideUserInterfaceStyle;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)hidesExpandableButton;
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (BOOL)requiresKeyboard;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;

@end
