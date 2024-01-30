@class NSArray, NSString, UIView;

@interface UICandidateViewController : UIViewController <UIPredictiveViewController>

@property (retain, nonatomic) UIView *candidateView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredCandidateBarHeightForTraitCollection:(id)a0;

- (BOOL)hidesExpandableButton;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;

@end
