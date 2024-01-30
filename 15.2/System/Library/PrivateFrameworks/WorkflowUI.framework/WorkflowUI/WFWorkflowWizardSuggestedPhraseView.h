@class UILabel, NSString;
@protocol WFWorkflowWizardSuggestedPhraseViewDelegate;

@interface WFWorkflowWizardSuggestedPhraseView : UIView

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) id<WFWorkflowWizardSuggestedPhraseViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)highlight;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)unhighlight;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)fadeOutHighlight;
- (id)initWithSuggestedPhrase:(id)a0;

@end
