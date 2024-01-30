@class UIProgressView, NSString, UILabel, NSLayoutConstraint;

@interface OBSetupAssistantProgressController : OBWelcomeController <OBSetupAssistantSupport>

@property (retain, nonatomic) UIProgressView *progressBar;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) NSLayoutConstraint *progressLabelTopAnchorConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)setProgress:(double)a0;
- (id)_progressFont;
- (double)_progressLabelTopAnchorConstraintConstantWithFont:(id)a0;
- (void)setProgressText:(id)a0;
- (void)setTitle:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
