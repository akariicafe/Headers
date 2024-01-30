@class NSString;

@interface MagnifierSupport.LensFiltersScrubber : UIControl <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ shouldHighlight;
    void /* unknown type, empty encoding */ maskedView;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ buttons;
    void /* unknown type, empty encoding */ feedbackGenerator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlayBox;
    void /* unknown type, empty encoding */ overlayBoxLeadingAnchorConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activeItemIndicator;
}

@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityHint;

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)didTapScrollView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
