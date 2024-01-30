@class UIKeyboardEmojiGraphicsTraits, UIResponder, UIView;
@protocol UIKBEmojiHitTestResponder;

@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView {
    BOOL _isScrubbing;
    double _scrubStartXLocation;
}

@property (retain, nonatomic) UIView *scrubView;
@property (retain, nonatomic) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder;
@property unsigned long long selectedIndex;

+ (BOOL)wantsScreenTraits;

- (void)prepareForDisplay;
- (void)dimKeys:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)animateScrubberToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })categorySelectedCircleRect:(long long)a0;
- (unsigned long long)flippedIndexForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDivider:(int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyplane:(id)a1 key:(id)a2 screenTraits:(id)a3;
- (unsigned long long)selectedIndexForTouches:(id)a0;
- (void)updateCategory;
- (void)updateCategoryOnBar:(unsigned long long)a0;
- (void)updateToCategory:(long long)a0;

@end
