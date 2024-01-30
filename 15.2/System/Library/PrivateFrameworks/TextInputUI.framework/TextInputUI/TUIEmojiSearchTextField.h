@class NSString, UIImageView, TUIEmojiSearchTextFieldBackgroundView, NSDate, TUIEmojiSearchTextFieldPortalView;
@protocol TUIEmojiSearchTextFieldDelegate;

@interface TUIEmojiSearchTextField : UITextField <UITextFieldDelegate> {
    NSDate *_highlightBeginTime;
    UIImageView *_magnifyingGlassView;
    TUIEmojiSearchTextFieldPortalView *_portalView;
    TUIEmojiSearchTextFieldBackgroundView *_backgroundView;
    BOOL _active;
}

@property (weak, nonatomic) id<TUIEmojiSearchTextFieldDelegate> searchDelegate;
@property (readonly, nonatomic) BOOL pretendsToBecomeFirstResponder;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)_setRenderConfig:(id)a0;
- (void)layoutSubviews;
- (id)insertionPointColor;
- (void)paste:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (BOOL)_isInteractiveDespiteResponderStatus;
- (id)_clearButton;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)fieldEditorDidChange:(id)a0;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pretendsToBecomeFirstResponder:(BOOL)a1;
- (id)_textAndGlyphColorForRenderConfig:(id)a0;
- (id)_textAndGlyphCompositingFilterForRenderConfig:(id)a0;
- (void)_matchPortalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_windowBecameKeyNotificationPosted:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)isEditing;
- (BOOL)becomeFirstResponder;
- (void)didMoveToWindow;
- (id)portalView;
- (id)selectionContainerView;

@end
