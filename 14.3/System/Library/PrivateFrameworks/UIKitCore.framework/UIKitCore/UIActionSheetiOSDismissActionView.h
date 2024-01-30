@class UIButton, NSString;

@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView <UIActionSheetPresentationControllerDismissActionView>

@property (retain, nonatomic) UIButton *dismissButton;
@property (nonatomic) BOOL usesShortCompactVerticalLayout;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setupDismissButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithContinuousCornerRadius:(double)a0;
- (double)_heightForTraitCollection:(id)a0;

@end
