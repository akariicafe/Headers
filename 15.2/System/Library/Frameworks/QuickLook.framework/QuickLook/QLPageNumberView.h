@class UILabel, NSNumberFormatter;

@interface QLPageNumberView : UIView {
    long long _pageNumber;
    long long _pageCount;
    UILabel *_backgroundLabel;
    UILabel *_label;
    NSNumberFormatter *_indexFormatter;
}

@property long long pageNumber;
@property long long pageCount;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)_indexFormatter;
- (void)_updateString;
- (struct CGPath { } *)_copyMutablePathForRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1 inverted:(BOOL)a2;

@end
