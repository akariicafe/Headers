@class UISwitch, SBSConnectedDisplayInfo, DBSArrangementLayoutViewController, UIView, SBSExternalDisplayService;
@protocol DBSArrangementViewControllerDelegate;

@interface DBSArrangementViewController : PSViewController <DBSArrangementLayoutViewControllerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DBSArrangementLayoutViewController *layoutController;
@property (retain, nonatomic) UISwitch *mirroredSwitch;
@property (nonatomic) unsigned long long currentDisplayLocation;
@property (nonatomic) BOOL wasMirrored;
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo;
@property (retain, nonatomic) SBSExternalDisplayService *displayService;
@property (weak, nonatomic) id<DBSArrangementViewControllerDelegate> delegate;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)cancelPressed;
- (void)nativeDisplayLocationDidChange:(unsigned long long)a0;
- (id)externalDisplayName;
- (struct CGSize { double x0; double x1; })externalDisplaySize;
- (void)mirroredToggled:(id)a0;
- (id)nativeDisplayImageWithWidth:(double)a0;
- (id)nativeDisplayName;
- (struct CGSize { double x0; double x1; })nativeDisplaySize;
- (void)setPressed;
- (void)updateSetButtonEnablement;

@end
