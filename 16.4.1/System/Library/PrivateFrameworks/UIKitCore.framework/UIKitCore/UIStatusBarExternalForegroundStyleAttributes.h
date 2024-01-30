@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes

- (double)scale;
- (id)uniqueIdentifier;
- (double)leftEdgePadding;
- (double)standardPadding;
- (long long)activityIndicatorStyleWithSyncActivity:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBatteryInsides;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsForBluetoothBatteryInsides;
- (id)makeTextFontForStyle:(long long)a0;
- (double)middlePadding;
- (double)rightEdgePadding;
- (id)textForNetworkType:(int)a0;
- (double)textOffsetForStyle:(long long)a0;
- (BOOL)usesVerticalLayout;

@end
