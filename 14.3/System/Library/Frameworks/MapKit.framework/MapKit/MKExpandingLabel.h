@class UIFont, NSString, NSAttributedString, NSTextContainer, NSLayoutManager, UITextView, UITapGestureRecognizer, NSTextStorage, _MKUILabel, UIColor;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate, UITextViewDelegate> {
    unsigned long long _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    _MKUILabel *_showMoreLabel;
    NSString *_showLessText;
    UIFont *_showLessFont;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    BOOL _isPerformingLayout;
}

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *showMoreText;
@property (retain, nonatomic) UIFont *showMoreFont;
@property (retain, nonatomic) UIColor *showMoreTextColor;
@property (copy, nonatomic) NSString *showLessText;
@property (retain, nonatomic) UIFont *showLessFont;
@property (retain, nonatomic) UIColor *showLessTextColor;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) BOOL allowLessText;
@property (copy, nonatomic) id /* block */ labelResizedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)isShowingExpanded;
- (void)_mkExpandingLabelComonInit;
- (BOOL)_canShowAllText;
- (void)_setExpansionMode:(unsigned long long)a0;
- (void)_setTextExclusionPath;
- (BOOL)_canShowLess;
- (id)_showLessTextSeparator;
- (id)init;
- (BOOL)_isShowingUserExpanded;
- (void).cxx_destruct;
- (void)_expand;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
