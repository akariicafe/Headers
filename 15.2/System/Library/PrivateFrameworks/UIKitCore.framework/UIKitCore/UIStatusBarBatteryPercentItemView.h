@class NSString;

@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView {
    NSString *_percentString;
}

- (long long)textStyle;
- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (long long)textAlignment;

@end
