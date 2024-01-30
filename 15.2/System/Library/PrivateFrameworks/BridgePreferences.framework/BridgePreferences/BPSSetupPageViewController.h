@class UILabel, NSString, UIView;
@protocol BPSBuddyControllerDelegate;

@interface BPSSetupPageViewController : UIViewController <BPSBuddyController> {
    UIView *_contentView;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } computedTitleFrame;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<BPSBuddyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)_baseIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)titleString;
- (void)updateTitleLabel;
- (id)localizedTitle;
- (id)titleAttributedString;
- (id)localizedNotificationTitle;
- (BOOL)contentViewIsInAdjustedScrollView;
- (id)localizedInformativeText;
- (id)followUpIdentifier;
- (id)followUpActions;
- (id)localizedInformativeNotificationText;
- (BOOL)wantsFollowUpNotification;
- (void)addFollowUpForPageAndDevice:(id)a0 withCompletion:(id /* block */)a1;
- (void)addFollowUpForPageWithCompletion:(id /* block */)a0;
- (void)removeFollowupForPageWithCompletion:(id /* block */)a0;
- (double)verticalTitleInset;

@end
