@class NSString;

@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView {
    NSString *_percentString;
}

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (long long)textStyle;
- (long long)textAlignment;
- (void).cxx_destruct;
- (BOOL)animatesDataChange;
- (double)extraRightPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
