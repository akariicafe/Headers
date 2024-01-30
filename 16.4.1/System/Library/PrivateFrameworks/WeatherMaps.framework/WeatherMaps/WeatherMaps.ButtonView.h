@interface WeatherMaps.ButtonView : UIButton {
    void /* unknown type, empty encoding */ menuDelegate;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ fixedWidth;
    void /* unknown type, empty encoding */ fixedHeight;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ useLargeIcons;
}

- (struct CGPoint { double x0; double x1; })menuAttachmentPointForConfiguration:(id)a0;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)recognizedHover:(id)a0;

@end
