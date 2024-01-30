@class NSString;

@interface UIStatusBarNotChargingItemView : UIStatusBarItemView {
    NSString *_notChargingString;
}

- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;

@end
