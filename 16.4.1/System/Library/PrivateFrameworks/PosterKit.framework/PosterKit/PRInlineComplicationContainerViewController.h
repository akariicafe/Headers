@class NSString, PRComplicationDescriptor, CHUISWidgetHostViewController, BSUIVibrancyConfiguration;
@protocol PRInlineComplicationContainerViewControllerDelegate;

@interface PRInlineComplicationContainerViewController : UIViewController <BSInvalidatable> {
    CHUISWidgetHostViewController *_hostViewController;
}

@property (retain, nonatomic) PRComplicationDescriptor *complicationDescriptor;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (weak, nonatomic) id<PRInlineComplicationContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isFocused) BOOL focused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)invalidate;
- (void)_tapGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (id)initWithComplicationDescriptor:(id)a0;
- (void)setFocused:(BOOL)a0 animated:(BOOL)a1;
- (void)setFocused:(BOOL)a0 animationSettings:(id)a1;

@end
