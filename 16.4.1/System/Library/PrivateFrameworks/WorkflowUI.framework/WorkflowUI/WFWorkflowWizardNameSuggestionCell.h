@class UIStackView, NSArray, NSString, UILabel;
@protocol WFWorkflowWizardNameSuggestionCellDelegate;

@interface WFWorkflowWizardNameSuggestionCell : UITableViewCell <WFWorkflowWizardSuggestedPhraseViewDelegate>

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) NSArray *suggestionsViews;
@property (weak, nonatomic) id<WFWorkflowWizardNameSuggestionCellDelegate> delegate;
@property (copy, nonatomic) NSString *infoText;
@property (copy, nonatomic) NSArray *suggestedPhrases;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)suggestionsFont;
+ (id)suggestionsText;
+ (id)infoFont;
+ (double)preferredHeightForWidth:(double)a0 infoText:(id)a1 suggestedPhrases:(id)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)workflowWizardSuggestedPhraseViewDidSelectSuggestedPhrase:(id)a0;

@end
