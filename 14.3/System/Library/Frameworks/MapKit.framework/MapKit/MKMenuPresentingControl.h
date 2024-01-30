@class NSString, UIMenu;

@interface MKMenuPresentingControl : UIControl <UIContextMenuInteractionDelegate> {
    BOOL _selected;
    BOOL _highlighted;
}

@property (retain, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)setSelected:(BOOL)a0;
- (id)initWithMenu:(id)a0;
- (void)_updateBackgroundColor:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;

@end
