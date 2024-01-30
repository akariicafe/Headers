@class UIColor, NSAttributedString, NSMutableIndexSet;
@protocol SGTappableTextViewDelegate;

@interface SGTappableTextView : UITextView {
    UIColor *_activeRangeNormalColor;
    UIColor *_activeRangeHighlightedColor;
    NSAttributedString *_clientText;
    NSMutableIndexSet *_activeRanges;
    struct _NSRange { unsigned long long location; unsigned long long length; } _trackingRange;
    BOOL _trackingRangeHighlighted;
    BOOL _needsLabelUpdate;
    long long _currentStyle;
}

@property (weak, nonatomic) id<SGTappableTextViewDelegate> tappableDelegate;
@property (retain, nonatomic) UIColor *activeRangeNormalColor;
@property (retain, nonatomic) UIColor *activeRangeHighlightedColor;
@property (readonly, nonatomic) BOOL hasActiveRanges;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeRangesRect;

- (void)setAttributedText:(id)a0;
- (id)_textColor;
- (void)_commonInit;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)text;
- (id)initWithCoder:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isTracking;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setText:(id)a0;
- (void)_updateLabelIfNeeded;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_updateCurrentAppearance;
- (void)addActiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeActiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeAllActiveRanges;
- (void)setTrackingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })trackingRange;
- (void)_highlightTrackingRange:(BOOL)a0;
- (void)_updateAttributedTextColor;
- (void)_setNeedUpdateLabel;
- (unsigned long long)_characterIndexAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
