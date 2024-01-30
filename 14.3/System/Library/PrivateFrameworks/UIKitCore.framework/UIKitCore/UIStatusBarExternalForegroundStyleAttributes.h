@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes

- (double)scale;
- (id)uniqueIdentifier;
- (double)middlePadding;
- (double)standardPadding;
- (id)textForNetworkType:(int)a0;
- (BOOL)usesVerticalLayout;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (id)makeTextFontForStyle:(long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBluetoothBatteryInsides;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (double)textOffsetForStyle:(long long)a0;

@end
