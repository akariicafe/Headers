@class UIStackView, UIImpactFeedbackGenerator, SBSHomeScreenService, NSString, UILabel, DBSDeviceAppIconSizeAnimationView, DBSCheckmarkView;
@protocol DBSDeviceAppIconSizeOptionViewDelegate;

@interface DBSDeviceAppIconSizeOptionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIStackView *_stackView;
@property (retain, nonatomic) DBSDeviceAppIconSizeAnimationView *_packageView;
@property (retain, nonatomic) UILabel *_label;
@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView;
@property (retain, nonatomic) UIImpactFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, getter=highlighted) BOOL highlight;
@property (retain, nonatomic) SBSHomeScreenService *_homeScreenService;
@property (weak, nonatomic) id<DBSDeviceAppIconSizeOptionViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long appIconSizeOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (void).cxx_destruct;
- (void)stopAnimation;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)startAnimation;
- (void)_configureView;
- (void)_userDidTapOnView:(id)a0;
- (void)_updateViewForCurrentDeviceAppIconSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appIconSizeOption:(unsigned long long)a1;

@end
