@class NSTimer, NSString, NSArray, UILabel, UIToolbar, UITextField, QLFindOnPageInputBar, UIBarButtonItem;
@protocol QLFindOnPageToolbarDelegate;

@interface QLFindOnPageInputView : UIInputView <UISearchBarDelegate> {
    UIToolbar *_toolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    QLFindOnPageInputBar *_inputBar;
    UIBarButtonItem *_cancelBarButtonItem;
    NSArray *_toolbarItems;
    id<QLFindOnPageToolbarDelegate> _findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UILabel *_inFieldMatchLabel;
    BOOL _editing;
    BOOL _isVirtualKeyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _onscreenKeyboardFrame;
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
- (struct CGSize { double x0; double x1; })leftContentViewSize;
- (void)previous:(id)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_toolbarFrame;
- (void)_initializeToolbarItems;
- (double)_toolbarVerticalInset;
- (id)_matchLabelText;
- (BOOL)_updateEditing:(BOOL)a0;
- (void)_doUpdateSearchText;
- (BOOL)_keyboardIsSplit;

@end
