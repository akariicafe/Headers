@class NSString;

@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
    NSString *_contentsString;
    double _letterSpacing;
    BOOL _ellipsize;
}

- (id)contentsImage;
- (void).cxx_destruct;
- (double)extraRightPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
