@class UIColor, IMCloudKitSyncProgress, UIProgressView, UIToolbar, UILabel, UIButton;
@protocol CKCloudKitSyncProgressViewControllerDelegate;

@interface CKCloudKitSyncProgressViewController : UIViewController

@property (retain, nonatomic) IMCloudKitSyncProgress *lastProgress;
@property (weak, nonatomic) UIToolbar *toolbar;
@property (copy, nonatomic) UIColor *originalProgressTintColor;
@property (nonatomic) BOOL progressLabelIsWrapping;
@property (readonly, nonatomic) UILabel *progressLabel;
@property (readonly, nonatomic) UILabel *userMessageLabel;
@property (readonly, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) UIProgressView *progressBar;
@property (weak, nonatomic) id<CKCloudKitSyncProgressViewControllerDelegate> delegate;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL actionButtonEnabled;

- (void)viewDidLayoutSubviews;
- (void)_actionButtonWasPressed:(id)a0;
- (void)_addProgressLabel;
- (void)_addProgressView;
- (void)_addUserMessageLabel;
- (void)_addActionButton;
- (BOOL)_isProgressLabelWrapping;
- (void)updateWithCloudKitProgress:(id)a0 forceShow:(BOOL)a1;
- (void)showProgressBarWithIndeterminateProgress:(BOOL)a0 percentComplete:(double)a1;
- (void)updateWithCloudKitProgress:(id)a0;
- (void)showUserMessageWithString:(id)a0 showActionButton:(BOOL)a1 withActionButtonLabel:(id)a2;
- (void)addToToolbar:(id)a0;
- (BOOL)actionButtonEnabled;
- (void)setActionButtonEnabled:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)_createLabel;

@end
