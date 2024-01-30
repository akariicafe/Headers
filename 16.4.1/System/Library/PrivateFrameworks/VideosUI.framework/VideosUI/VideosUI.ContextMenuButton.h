@interface VideosUI.ContextMenuButton : VUIButton {
    void /* unknown type, empty encoding */ lockupViewModel;
    void /* unknown type, empty encoding */ contextMenuInteractor;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;

@end
