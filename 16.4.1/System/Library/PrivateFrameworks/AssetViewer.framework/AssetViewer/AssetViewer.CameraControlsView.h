@interface AssetViewer.CameraControlsView : UIView {
    void /* unknown type, empty encoding */ cameraController;
    void /* unknown type, empty encoding */ entityController;
    void /* unknown type, empty encoding */ wantsFastMovement;
    void /* unknown type, empty encoding */ upButton;
    void /* unknown type, empty encoding */ rightButton;
    void /* unknown type, empty encoding */ downButton;
    void /* unknown type, empty encoding */ leftButton;
    void /* unknown type, empty encoding */ fastMovementButton;
    void /* unknown type, empty encoding */ zoomOutButton;
    void /* unknown type, empty encoding */ zoomInButton;
    void /* unknown type, empty encoding */ menuButton;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)buttonPressedWithSender:(id)a0;

@end
