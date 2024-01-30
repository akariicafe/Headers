@class UIView, NSString, NSSet, WFVariableShortcutsBar, UIResponder, WFVariableShortcutsTray, WFVariableSuggester, UIColor;
@protocol WFVariableProvider, WFVariableTypingContext, WFVariableUIDelegate, WFInputViewMutable;

@interface WFVariableInputCoordinator : NSObject <WFVariableShortcutsBarDelegate, WFVariableShortcutsTrayDelegate, WFVariableSuggesterDelegate, WFVariableObserver>

@property (retain, nonatomic) WFVariableShortcutsBar *shortcutsBar;
@property (retain, nonatomic) WFVariableShortcutsTray *shortcutsTray;
@property (retain, nonatomic) WFVariableSuggester *variableSuggester;
@property (nonatomic) BOOL undocked;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousFrame;
@property (weak, nonatomic) UIResponder<WFInputViewMutable> *responder;
@property (weak, nonatomic) id<WFVariableTypingContext> variableTypingContext;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (nonatomic) BOOL showsDoneButton;
@property (copy, nonatomic) NSString *customButtonTitle;
@property (weak, nonatomic) UIView *inputViewWhenTrayCollapsed;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) id /* block */ variableBlock;
@property (copy, nonatomic) id /* block */ customButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)availableVariablesDidChange;
- (void)variableSuggesterSuggestionsDidChange:(id)a0;
- (void)variableShortcutsTray:(id)a0 didSelectVariable:(id)a1;
- (void)variableShortcutsTrayDidSelectMagicVariable:(id)a0;
- (void)shortcutsBarDidDismiss:(id)a0;
- (void)shortcutsBarDidOpenTray:(id)a0;
- (void)shortcutsBar:(id)a0 didSelectVariable:(id)a1;
- (void)shortcutsBarDidSelectMagicVariable:(id)a0;
- (void)shortcutsBarDidSelectCustomButton:(id)a0;
- (BOOL)showsUserDefinedVariables;
- (BOOL)showsMagicVariables;
- (id)specialVariables;
- (void)updateInputViews;
- (void)revealTray;
- (void)collapseTrayAnimated:(BOOL)a0;
- (void)showActionOutputPicker;
- (void)reloadCurrentVariables;

@end
