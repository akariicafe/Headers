@class NSString;

@interface UIStatusBarDoubleHeightItemView : UIStatusBarItemView {
    NSString *_contentsString;
    double _letterSpacing;
    BOOL _ellipsize;
}

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (id)contentsImage;

@end
