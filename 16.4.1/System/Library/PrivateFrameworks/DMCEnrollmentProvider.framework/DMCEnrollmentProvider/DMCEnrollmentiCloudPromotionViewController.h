@class NSString;
@protocol DMCEnrollmentiCloudPromotionViewControllerDelegate;

@interface DMCEnrollmentiCloudPromotionViewController : DMCEnrollmentTemplateTableViewController <DMCDismissalAwareViewController>

@property (nonatomic) unsigned long long type;
@property (weak) id<DMCEnrollmentiCloudPromotionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *quotaString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithType:(unsigned long long)a0 delegate:(id)a1;
- (void)viewControllerHasBeenDismissed;
- (void)_setupBottomViewForType:(unsigned long long)a0;
- (void)_setupUIForType:(unsigned long long)a0;
- (void)leftBarButtonTapped:(id)a0;

@end
