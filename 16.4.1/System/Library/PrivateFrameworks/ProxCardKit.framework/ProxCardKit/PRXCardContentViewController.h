@class PRXCardContentView, NSString, PRXAction, NSArray, NSAttributedString, UIImageView, PRXButton, PRXPullDismissalInteractionDriver, PRXTransitioningController, PRXCardContentWrapperView;

@interface PRXCardContentViewController : UIViewController <UIScrollViewDelegate, PRXPullDismissalProvider, PRXCardContentProviding> {
    PRXTransitioningController *_transitionController;
    BOOL _transitioningSize;
    PRXCardContentView *_contentView;
    PRXCardContentWrapperView *_wrapperView;
    BOOL _shouldAutoScrollToBottom;
}

@property (readonly, nonatomic) PRXCardContentView *contentView;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle;
@property (copy, nonatomic) NSString *bottomTrayTitle;
@property (retain, nonatomic) UIImageView *bottomTrayImageView;
@property (nonatomic) unsigned long long dismissalType;
@property (retain, nonatomic) PRXAction *dismissButtonAction;
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) PRXAction *infoButtonAction;
@property (readonly, nonatomic) PRXButton *infoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver;
@property (readonly, nonatomic) long long cardStyle;
@property (readonly, nonatomic) BOOL allowsPullToDismiss;

+ (Class)contentViewClass;

- (id)addAction:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithContentView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_updateActionButtons;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)setTransitioningSize:(BOOL)a0;
- (void)removeAction:(id)a0;
- (void)scrollToBottom;
- (void)updatePreferredContentSizeForCardWidth:(double)a0;
- (void)_prxCommonInit;
- (void)_updateDismisalControls;
- (id)bottomTray;
- (id)dismissalConfirmationActionWithTitle:(id)a0 message:(id)a1 confirmButtonTitle:(id)a2 cancelButtonTitle:(id)a3;
- (void)hideActivityIndicator;
- (void)removeBottomTray;
- (void)showActivityIndicatorWithStatus:(id)a0;

@end
