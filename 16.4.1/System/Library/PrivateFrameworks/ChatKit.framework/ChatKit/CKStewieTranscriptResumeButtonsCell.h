@class UIButton;

@interface CKStewieTranscriptResumeButtonsCell : CKTranscriptLabelCell

@property (retain, nonatomic) UIButton *callEmergencyServicesButton;
@property (retain, nonatomic) UIButton *textEmergencyServicesButton;
@property (nonatomic, getter=isShowingStewieTextButton) BOOL showStewieTextButton;

+ (id)_buttonWithSystemImageName:(id)a0 titleString:(id)a1;
+ (void)_configureLabel:(id)a0;
+ (id)_makeCallEmergencyServicesButton;
+ (id)_makeTextEmergencyServicesButton;
+ (double)heightForChatItem:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_layoutLabelInAlignmentContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)attributedButtonText;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)layoutSubviewsForAlignmentContents;
- (void)touchUpInsideCallEmergencyServicesButton:(id)a0;
- (void)touchUpInsideTextEmergencyServicesButton:(id)a0;

@end
