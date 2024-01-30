@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {
    NSString *_personNameString;
    double _letterSpacing;
    double _maxWidth;
}

- (id)contentsImage;
- (long long)legibilityStyle;
- (double)standardPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)extraRightPadding;
- (void).cxx_destruct;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (id)accessibilityHUDRepresentation;
- (BOOL)_updateWithPersonName:(id)a0 maxWidth:(double)a1;

@end
