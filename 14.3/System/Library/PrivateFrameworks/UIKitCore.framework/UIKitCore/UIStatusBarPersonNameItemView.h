@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {
    NSString *_personNameString;
    double _letterSpacing;
    double _maxWidth;
}

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (BOOL)_updateWithPersonName:(id)a0 maxWidth:(double)a1;
- (long long)legibilityStyle;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)standardPadding;

@end
