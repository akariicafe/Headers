@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {
    NSString *_personNameString;
    double _letterSpacing;
    double _maxWidth;
}

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (long long)legibilityStyle;
- (void).cxx_destruct;
- (BOOL)_updateWithPersonName:(id)a0 maxWidth:(double)a1;
- (double)standardPadding;
- (double)addContentOverlap:(double)a0;
- (double)extraRightPadding;
- (double)resetContentOverlap;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
