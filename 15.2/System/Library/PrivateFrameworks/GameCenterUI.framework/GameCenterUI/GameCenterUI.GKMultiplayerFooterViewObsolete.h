@class NSString;

@interface GameCenterUI.GKMultiplayerFooterViewObsolete : UIView {
    void /* unknown type, empty encoding */ buttonTitle;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ statusLabel;
    void /* unknown type, empty encoding */ messageButton;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ startGameHandler;
    void /* unknown type, empty encoding */ addMessageHandler;
}

@property (nonatomic) void /* unknown type, empty encoding */ wantsMaterialBackground;
@property (nonatomic) BOOL startGameButtonEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ messageButtonState;
@property (nonatomic, copy) NSString *primaryButtonTitle;
@property (nonatomic, copy) NSString *footerStatusString;
@property (nonatomic, copy) id /* block */ startGameHandler;
@property (nonatomic, copy) id /* block */ addMessageHandler;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapButton:(id)a0;
- (void)configureUsing:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapMessageButton:(id)a0;

@end
