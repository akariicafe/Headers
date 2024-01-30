@class UILabel, NSString, UIBarButtonItem;
@protocol DevicePINControllerDelegate;

@interface DMCPINEntryViewController : DevicePINController <UIAdaptivePresentationControllerDelegate, DMCDismissalAwareViewController>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (weak, nonatomic) id<DevicePINControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL inProgress;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (id)_titleFont;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)stringsBundle;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewControllerHasBeenDismissed;
- (void)leftBarButtonTapped:(id)a0;

@end
