@class EMKOverlayView, NSTimer, EMKGestureRecognizerDelegate, EMFEmojiPreferences;

@interface EMKTextView : UITextView {
    EMKOverlayView *_overlayView;
    unsigned long long _tappedGlyphIndex;
    struct _NSRange { unsigned long long location; unsigned long long length; } _tappedGlyphRange;
    EMKGestureRecognizerDelegate *_gestureRecognizerDelegate;
    EMFEmojiPreferences *_emojiPreferences;
    NSTimer *_timer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _displayRect;
    BOOL _emojiConversionActive;
}

@property (getter=isEmojiConversionEnabled) BOOL emojiConversionEnabled;

- (BOOL)_shouldSuppressSelectionCommands;
- (void)startTimer:(id)a0;
- (void)didMoveToWindow;
- (void)inputModeDidChange:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)deleteBackward;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)keyboardDidShow:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorRect;
- (void)setDelayFrames:(unsigned long long)a0;
- (void)setPostFrames:(unsigned long long)a0;
- (void)setPreFrames:(unsigned long long)a0;
- (void)calculateDisplayRect;
- (void)dismissOverlayView;
- (void)emojifyingDisabled:(id)a0;
- (id)personalizedEmojiTokenListForList:(id)a0;
- (void)replaceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withEmojiToken:(id)a1 language:(id)a2;
- (void)setEmojiConversionLanguagesAndActivateConversion:(BOOL)a0;
- (void)setEmojiConversionLanguagesForInputModeChange:(id)a0;
- (void)setEmojiConversionLanguagesForKeyboardShow:(id)a0;
- (void)stopTimer:(id)a0;
- (void)textTapGestureRecognized:(id)a0;
- (BOOL)touchHasEmojiSignificance:(id)a0;
- (void)updateEmojiDisplay:(id)a0;
- (void)updateOverlayView:(id)a0;

@end
