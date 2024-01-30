@class NSString, PRXAction, PRXFeatureTourContentView;

@interface PRXFeatureTourContentViewController : UIViewController <PRXCardContentProviding> {
    PRXFeatureTourContentView *_contentView;
}

@property (readonly, nonatomic) PRXFeatureTourContentView *contentView;
@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) unsigned long long dismissalType;
@property (retain, nonatomic) PRXAction *dismissButtonAction;
@property (readonly, nonatomic) long long cardStyle;
@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)setTitle:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateTitleView;
- (void)_updateDismissButton;
- (void)viewDidLoad;
- (void)updatePreferredContentSizeForCardWidth:(double)a0;
- (void)_updateBodyView;
- (id)dismissalConfirmationActionWithTitle:(id)a0 message:(id)a1 confirmButtonTitle:(id)a2 cancelButtonTitle:(id)a3;

@end
