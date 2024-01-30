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

+ (id)inputSetWithKeyboardAndAccessoryView:(id)a0;
+ (id)inputSetWithInputView:(id)a0 accessoryView:(id)a1;
+ (id)inputSetWithInputView:(id)a0 accessoryView:(id)a1 assistantView:(id)a2;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)a0 assistantView:(id)a1;
+ (id)inputSetWithOriginalInputSet:(id)a0 duplicateInputView:(BOOL)a1 duplicateInputAccessoryView:(BOOL)a2 duplicateInputAssistantView:(BOOL)a3;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)a0;
+ (id)emptyInputSet;

- (BOOL)setAccessoryViewVisible:(BOOL)a0 delay:(double)a1;
- (BOOL)_isFullscreen;
- (void)_endSplitTransitionIfNeeded;
- (BOOL)_accessorySuppressesShadow;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)a0;
- (id)_splittableInputAccessoryView;
- (void)dealloc;
- (void)_setRenderConfig:(id)a0;
- (void)inheritNullState:(id)a0;
- (void)setKeyboardAssistantBar:(id)a0;
- (BOOL)__isCKAccessoryView;
- (id)inputSetWithInputAccessoryViewOnly;
- (void)refreshPresentation;
- (id)_themableInputAccessoryView;
- (id)description;
- (BOOL)_inputViewSetSupportsSplit;
- (BOOL)_inputAccessoryViewSupportsSplit;
- (void)_forceRestoreUsingBecomeFirstResponder:(BOOL)a0;
- (BOOL)inSyncWithOrientation:(long long)a0 forKeyboard:(id)a1;
- (id)normalizePlaceholders;
- (BOOL)isEqual:(id)a0;
- (BOOL)_inputViewIsVisible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rightInputViewSetFrame;
- (BOOL)isStrictSupersetOfViewSet:(id)a0;
- (BOOL)_actLikeInputAccessoryViewSupportsSplit;
- (BOOL)_inputViewSupportsSplit;
- (void)_setSplitProgress:(double)a0;
- (BOOL)canAnimateToInputViewSet:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_leftInputViewSetFrame;
- (id)initWithInputView:(id)a0 accessoryView:(id)a1 assistantView:(id)a2 isKeyboard:(BOOL)a3;
- (BOOL)hierarchyContainsView:(id)a0;
- (BOOL)containsResponder:(id)a0;
- (BOOL)_isKeyboard;
- (BOOL)containsView:(id)a0;
- (long long)keyboardOrientation:(id)a0;
- (void)_beginSplitTransitionIfNeeded;

@end
