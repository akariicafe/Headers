@class UIView;

@interface TeaUI.JSONTextViewController : UIViewController <UITextViewDelegate, UISearchControllerDelegate, UITextFieldDelegate, UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ textParser;
    void /* unknown type, empty encoding */ _textSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchToolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resultsBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextTokenBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previousTokenBarButtonItem;
}

@property (nonatomic, readonly) UIView *inputAccessoryView;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)nextToken;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)previousToken;

@end
