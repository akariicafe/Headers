@class UILabel, NSString;
@protocol WFWorkflowWizardSuggestedPhraseViewDelegate;

@interface WFWorkflowWizardSuggestedPhraseView : UIView

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) id<WFWorkflowWizardSuggestedPhraseViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *suggestedPhrase;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)highlight;
- (void)unhighlight;
- (void)fadeOutHighlight;
- (id)initWithSuggestedPhrase:(id)a0;

@end
