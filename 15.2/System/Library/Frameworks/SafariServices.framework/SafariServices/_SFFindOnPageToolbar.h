@class NSTimer, NSString, NSArray, UIToolbar, UITextField, _SFFindOnPageInputBar, UIBarButtonItem, UILabel;
@protocol _SFFindOnPageToolbarDelegate;

@interface _SFFindOnPageToolbar : UIInputView <UISearchBarDelegate> {
    UIToolbar *_toolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    _SFFindOnPageInputBar *_inputBar;
    UIBarButtonItem *_doneBarButtonItem;
    NSArray *_toolbarItems;
    id<_SFFindOnPageToolbarDelegate> _findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UILabel *_inFieldMatchLabel;
    BOOL _editing;
    BOOL _useBottomInset;
}

@property (readonly, nonatomic) UITextField *inputField;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL usesNarrowLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillChangeFrame:(id)a0;
- (void)_done;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)initWithDelegate:(id)a0;
- (void)next:(id)a0;
- (void)updateUI;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)dismiss:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (struct CGSize { double x0; double x1; })rightContentViewSize;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (struct CGSize { double x0; double x1; })leftContentViewSize;
- (void)previous:(id)a0;
- (double)_accessoryViewHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_toolbarFrame;
- (void)_initializeToolbarItems;
- (double)_toolbarVerticalInset;
- (id)_matchLabelText;
- (BOOL)_updateEditing:(BOOL)a0;
- (void)_doUpdateSearchText;
- (BOOL)_keyboardIsSplit;

@end
