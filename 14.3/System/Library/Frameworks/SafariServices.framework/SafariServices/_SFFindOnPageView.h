@class NSString, UITextInputPasswordRules, WKWebView, _SFFindOnPageToolbar;
@protocol _SFFindOnPageViewDelegate;

@interface _SFFindOnPageView : UIView <_SFFindOnPageToolbarDelegate, _WKFindDelegate, UIKeyInput> {
    BOOL _requiresKeyboard;
    _SFFindOnPageToolbar *_toolbar;
}

@property (copy, nonatomic) NSString *findString;
@property (nonatomic) unsigned long long numberOfFindMatches;
@property (nonatomic) long long highlightedMatchIndex;
@property (weak, nonatomic) WKWebView *webView;
@property (readonly, weak, nonatomic) id<_SFFindOnPageViewDelegate> delegate;
@property (nonatomic) BOOL usesNarrowLayout;
@property (nonatomic) BOOL shouldFocusTextField;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL isFocused;
@property (readonly, nonatomic) BOOL shouldDisplayFindNextPreviousInDiscoverabilityHUD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;

+ (unsigned long long)_undefinedNumberOfMatches;
+ (long long)_undefinedMatchIndex;
+ (unsigned long long)_maximumNumberOfMatches;

- (void)insertText:(id)a0;
- (void)deleteBackward;
- (id)inputAccessoryView;
- (void)next;
- (id)keyCommands;
- (void)updateUI;
- (void).cxx_destruct;
- (id)toolbar;
- (void)_webView:(id)a0 didCountMatches:(unsigned long long)a1 forString:(id)a2;
- (void)_webView:(id)a0 didFailToFindString:(id)a1;
- (void)_dismiss:(id)a0;
- (void)_webView:(id)a0 didFindMatches:(unsigned long long)a1 forString:(id)a2 withMatchIndex:(long long)a3;
- (void)previous;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (id)findTextField;
- (void)_setFindingInWebViewIfNeeded;
- (void)prepareFindOnPageWithString:(id)a0;
- (BOOL)hideFindOnPage;
- (void)didMoveToSuperview;
- (void)prepareFindOnPage;
- (unsigned long long)_findOptions;
- (void)dismissFindOnPage;
- (id)textForToolbarLabel;
- (void)updateSearchText:(id)a0;
- (BOOL)hasMatches;
- (id)matchLabelText;
- (void)showFindOnPage;
- (void)selectFindOnPageText;
- (void)takeFindStringFromSelection;
- (BOOL)canBecomeFirstResponder;
- (void)_advance:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)done;

@end
