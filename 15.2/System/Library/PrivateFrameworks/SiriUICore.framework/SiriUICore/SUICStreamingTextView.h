@class UIFont, NSString, NSArray, NSLayoutManager, NSTextContainer, UIImage, NSTextStorage, NSMutableArray, NSMutableSet, UIColor;

@interface SUICStreamingTextView : UIView {
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSMutableArray *_words;
    NSMutableArray *_wordsToShow;
    NSMutableSet *_wordsToDelete;
    BOOL _animatedInternal;
    UIImage *_chevronImage;
}

@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double hyphenationFactor;
@property (retain, nonatomic) UIColor *startTextColor;
@property (retain, nonatomic) UIColor *endTextColor;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NSArray *words;
@property (readonly, nonatomic) NSString *text;
@property (nonatomic) BOOL showChevron;
@property (nonatomic) BOOL renderEmojisOnly;
@property (nonatomic) BOOL renderEmojis;

- (void)_resetState;
- (void)layoutSubviews;
- (void)_sharedInit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateText:(id)a0;
- (void)_updateAnimatedInternal;
- (id)_createChevronImage;
- (void)_layoutFrames;
- (id)_substringRangesContainingEmojiInString:(id)a0 startingIndex:(long long)a1;
- (id)_glyphImageForWord:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 textColor:(id)a3;
- (void)_animateLayers;
- (void)_animateWordIn:(id)a0;
- (void)_animateWordOut:(id)a0;
- (id)_createGlyphImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 glyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 layoutManager:(id)a2;

@end
