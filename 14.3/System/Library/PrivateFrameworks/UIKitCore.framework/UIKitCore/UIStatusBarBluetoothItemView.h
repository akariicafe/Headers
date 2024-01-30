@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {
    BOOL _connected;
    BOOL _shouldAnimateConnection;
}

- (void)setVisible:(BOOL)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)alphaForConnected:(BOOL)a0;
- (void)performPendedActions;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;

@end
