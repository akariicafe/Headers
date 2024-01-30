@class CPSAbridgableLabel, CPSNavigationAlertButtonView, UIImageView, NSString, CPNavigationAlert, CPSNavigationAlertProgressView;

@interface CPSNavigationAlertView : UIView <CPSLinearFocusProviding>

@property (retain, nonatomic) CPSAbridgableLabel *titleLabel;
@property (retain, nonatomic) CPSAbridgableLabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CPSNavigationAlertButtonView *buttonView;
@property (retain, nonatomic) CPSNavigationAlertProgressView *progressView;
@property (readonly, nonatomic) CPNavigationAlert *navigationAlert;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)startAnimating;
- (void)updateNavigationAlert:(id)a0;
- (id)_linearFocusItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 navigationAlert:(id)a1 templateDelegate:(id)a2 buttonDelegate:(id)a3;

@end
