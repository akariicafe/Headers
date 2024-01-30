@class NSString, SearchUIFirstTimeExperienceViewController, UIScrollView;
@protocol UniversalSearchFirstTimeExperienceViewControllerDelegate;

@interface UniversalSearchFirstTimeExperienceViewController : UIViewController <SearchUIFirstTimeExperienceDelegate> {
    SearchUIFirstTimeExperienceViewController *_firstTimeExperienceViewController;
    UIScrollView *_scrollView;
}

@property (weak, nonatomic) id<UniversalSearchFirstTimeExperienceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasShownParsecFirstTimeUserExperience;
+ (void)userDidInteractWithParsecFirstTimeUserExperience;

- (void)firstTimeExperienceContinueButtonPressed;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)unifiedFieldDidChange;

@end
