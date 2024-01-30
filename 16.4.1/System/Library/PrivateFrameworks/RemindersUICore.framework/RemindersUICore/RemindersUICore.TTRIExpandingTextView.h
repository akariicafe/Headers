@interface RemindersUICore.TTRIExpandingTextView : UITextView {
    void /* unknown type, empty encoding */ lineIndexWhereClippingBegins;
    void /* unknown type, empty encoding */ isForUseInNUIContainerView;
    void /* unknown type, empty encoding */ textStorageObserver;
}

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic, readonly) BOOL _shouldScrollEnclosingScrollView;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic) BOOL scrollEnabled;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)accessibilityActivate;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;
- (BOOL)isScrollEnabled;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
