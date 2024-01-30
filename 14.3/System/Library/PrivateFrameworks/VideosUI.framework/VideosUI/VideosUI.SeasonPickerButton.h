@interface VideosUI.SeasonPickerButton : UIControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ chevronDownImageView;
    void /* unknown type, empty encoding */ currentLabel;
    void /* unknown type, empty encoding */ altLabel;
    void /* unknown type, empty encoding */ textLayout;
    void /* unknown type, empty encoding */ currentIndex;
    void /* unknown type, empty encoding */ headerTitles;
}

- (id)init;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
