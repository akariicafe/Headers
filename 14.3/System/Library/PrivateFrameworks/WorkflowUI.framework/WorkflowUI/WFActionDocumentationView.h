@class UIStackView, UITextView, WFActionDrawerButton, WFAction;
@protocol WFActionDocumentationViewDelegate;

@interface WFActionDocumentationView : UIView

@property (retain, nonatomic) WFAction *action;
@property (weak, nonatomic) WFActionDrawerButton *favoriteButton;
@property (weak, nonatomic) WFActionDrawerButton *addToWorkflowButton;
@property (weak, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) UITextView *descriptionView;
@property (weak, nonatomic) id<WFActionDocumentationViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)updateButtonVisibility;
- (void)configureWithAction:(id)a0;
- (void)didSelectFavorite;
- (void)didSelectAddToThisWorkflow;
- (void)updateFavoriteButton;

@end
