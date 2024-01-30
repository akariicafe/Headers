@class NSMutableArray, NSArray, NSString, UIVisualEffectView, STSSearchBar, UIButton;
@protocol STSKeyCommandDelegate, STSZKWBrowserHeaderViewDelegate;

@interface STSZKWBrowserHeaderView : UIView <UISearchBarDelegate, UITextFieldDelegate, STSSearchBarDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource> {
    UIVisualEffectView *_visualEffectView;
    STSSearchBar *_searchBar;
    UIButton *_feedbackButton;
    NSMutableArray *_topZKWButtons;
    NSMutableArray *_bottomZKWButtons;
    BOOL _writingInSearchBar;
    NSMutableArray *_searchBarConstraints;
}

@property (weak, nonatomic) id<STSZKWBrowserHeaderViewDelegate> delegate;
@property (weak, nonatomic) id<STSKeyCommandDelegate> keyCommandDelegate;
@property (copy, nonatomic) NSArray *topSuggestions;
@property (copy, nonatomic) NSArray *bottomSuggestions;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (void)upArrowPressed;
- (void)downArrowPressed;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)keyCommands;
- (id)init;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)a0 didFinishWritingInElement:(id)a1;
- (void)_cancelButtonPressed:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (id)searchQuery;
- (void)escapeKeyPressed;
- (void)_scribbleInteraction:(id)a0 willBeginWritingInElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)layoutSubviews;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)returnKeyPressed;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void)setSearchQuery:(id)a0;
- (id)_buttonWithTitle:(id)a0;
- (void)_searchButtonPressed:(id)a0;
- (void)_updateTopStackView:(BOOL)a0 andBottomStackView:(BOOL)a1;
- (double)_searchBarWidthFraction;
- (unsigned long long)_suggestionIndexForButton:(id)a0;
- (void)_suggestionButtonPressed:(id)a0;
- (void)searchBarClicked;
- (void)enableSearchButton;

@end
