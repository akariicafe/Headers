@class UIInputViewController, UIKeyboard, UIView, UIResponder, UIKBRenderConfig;

@interface UIInputViewSet : NSObject {
    BOOL _restoreUsingBecomeFirstResponder;
}

@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *inputAssistantView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (retain, nonatomic) UIInputViewController *inputViewController;
@property (retain, nonatomic) UIInputViewController *assistantViewController;
@property (retain, nonatomic) UIInputViewController *accessoryViewController;
@property (readonly, nonatomic) UIView *layeringView;
@property (readonly, nonatomic) BOOL visible;
@property (readonly, nonatomic) BOOL usesKeyClicks;
@property (readonly, nonatomic) UIKeyboard *keyboard;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inputAccessoryViewBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputAssistantViewBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inputViewBounds;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) BOOL hasNonPlaceholderViews;
@property (readonly, nonatomic) BOOL supportsSplit;
@property (readonly, nonatomic) BOOL isSplit;
@property (readonly, nonatomic) BOOL inputViewKeyboardCanSplit;
@property (weak, nonatomic) UIResponder *restorableResponder;
@property (retain, nonatomic) UIKBRenderConfig *restorableRenderConfig;
@property (weak, nonatomic) UIResponder *accessoryViewNextResponder;
@property (readonly, nonatomic) BOOL isInputViewPlaceholder;
@property (readonly, nonatomic) BOOL isInputAssistantViewPlaceholder;
@property (readonly, nonatomic) BOOL isInputAccessoryViewPlaceholder;
@property (readonly, nonatomic) BOOL _inputViewIsSplit;
@property (nonatomic) double splitHeightDelta;
@property (readonly, nonatomic) UIView *splitExemptSubview;
@property (nonatomic) BOOL restoreUsingBecomeFirstResponder;
@property (nonatomic) BOOL isCustomInputView;
@property (nonatomic) BOOL isRemoteKeyboard;
@property (readonly, nonatomic) BOOL isNullInputView;
@property (readonly, nonatomic) BOOL isLocalMinimumHeightInputView;

+ (id)inputSetWithKeyboardAndAccessoryView:(id)a0;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)a0;
+ (id)emptyInputSet;
+ (id)inputSetWithOriginalInputSet:(id)a0 duplicateInputView:(BOOL)a1 duplicateInputAccessoryView:(BOOL)a2 duplicateInputAssistantView:(BOOL)a3;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)a0 assistantView:(id)a1;
+ (id)inputSetWithInputView:(id)a0 accessoryView:(id)a1;
+ (id)inputSetWithInputView:(id)a0 accessoryView:(id)a1 assistantView:(id)a2;

- (void)_setRenderConfig:(id)a0;
- (BOOL)containsResponder:(id)a0;
- (BOOL)isStrictSupersetOfViewSet:(id)a0;
- (BOOL)_accessorySuppressesShadow;
- (BOOL)containsView:(id)a0;
- (void)_forceRestoreUsingBecomeFirstResponder:(BOOL)a0;
- (BOOL)_inputViewIsVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftInputViewSetFrame;
- (BOOL)_inputViewSupportsSplit;
- (BOOL)_isFullscreen;
- (id)_splittableInputAccessoryView;
- (void)inheritNullState:(id)a0;
- (id)description;
- (BOOL)canAnimateToInputViewSet:(id)a0;
- (void)refreshPresentation;
- (void)_endSplitTransitionIfNeeded;
- (id)inputSetWithInputAccessoryViewOnly;
- (BOOL)isEqual:(id)a0;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)a0;
- (BOOL)_inputAccessoryViewSupportsSplit;
- (BOOL)inSyncWithOrientation:(long long)a0 forKeyboard:(id)a1;
- (BOOL)_isKeyboard;
- (BOOL)__isCKAccessoryView;
- (id)normalizePlaceholders;
- (id)initWithInputView:(id)a0 accessoryView:(id)a1 assistantView:(id)a2 isKeyboard:(BOOL)a3;
- (BOOL)_actLikeInputAccessoryViewSupportsSplit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightInputViewSetFrame;
- (void)dealloc;
- (void)_setSplitProgress:(double)a0;
- (double)inputViewSplitHeight;
- (long long)keyboardOrientation:(id)a0;
- (BOOL)hierarchyContainsView:(id)a0;
- (BOOL)setAccessoryViewVisible:(BOOL)a0 delay:(double)a1;
- (void)setKeyboardAssistantBar:(id)a0;
- (id)_themableInputAccessoryView;
- (BOOL)_inputViewSetSupportsSplit;
- (void)_beginSplitTransitionIfNeeded;

@end
