@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {
    BOOL _connected;
    BOOL _shouldAnimateConnection;
}

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void)setVisible:(BOOL)a0;
- (double)alphaForConnected:(BOOL)a0;
- (void)performPendedActions;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
