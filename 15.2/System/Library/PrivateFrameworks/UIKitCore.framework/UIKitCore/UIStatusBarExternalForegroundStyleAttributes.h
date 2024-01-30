@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes

- (id)uniqueIdentifier;
- (id)textForNetworkType:(int)a0;
- (double)leftEdgePadding;
- (BOOL)usesVerticalLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (double)standardPadding;
- (double)rightEdgePadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBluetoothBatteryInsides;
- (double)textOffsetForStyle:(long long)a0;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (id)makeTextFontForStyle:(long long)a0;
- (double)scale;
- (double)middlePadding;

@end
