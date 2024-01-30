@class NSString;

@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView {
    NSString *_percentString;
}

- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (void).cxx_destruct;
- (long long)textAlignment;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (long long)textStyle;

@end
