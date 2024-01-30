@interface SFExpandingTextView : UITextView {
    double _maxHeight;
}

- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (id)initWithMaxHeight:(double)a0;

@end
