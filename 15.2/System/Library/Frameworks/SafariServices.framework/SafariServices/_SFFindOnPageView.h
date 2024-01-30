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

- (void)done;
- (void)nextFindResultKeyPressed;
- (BOOL)_wantsPriorityOverFocusUpdates;
- (id)inputAccessoryView;
- (id)initWithDelegate:(id)a0;
- (void)previous;
- (void)didMoveToSuperview;
- (void)deleteBackward;
- (void)next;
- (id)keyCommands;
- (void)insertText:(id)a0;
- (void)updateUI;
- (void)_webView:(id)a0 didFailToFindString:(id)a1;
- (void)_webView:(id)a0 didCountMatches:(unsigned long long)a1 forString:(id)a2;
- (void)_webView:(id)a0 didFindMatches:(unsigned long long)a1 forString:(id)a2 withMatchIndex:(long long)a3;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)cancelKeyPressed;
- (id)toolbar;
- (void)previousFindResultKeyPressed;
- (BOOL)_requiresKeyboardWhenFirstResponder;
- (id)findTextField;
- (void)_setFindingInWebViewIfNeeded;
- (void)_selectAllIfNeeded;
- (void)prepareFindOnPageWithString:(id)a0;
- (BOOL)hideFindOnPage;
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

@end
