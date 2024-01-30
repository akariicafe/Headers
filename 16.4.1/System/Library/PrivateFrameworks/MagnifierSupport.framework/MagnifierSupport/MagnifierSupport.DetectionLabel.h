@interface MagnifierSupport.DetectionLabel : UITextView {
    void /* unknown type, empty encoding */ kSideInset;
    void /* unknown type, empty encoding */ peopleDetectionText;
    void /* unknown type, empty encoding */ doorDetectionText;
}

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
