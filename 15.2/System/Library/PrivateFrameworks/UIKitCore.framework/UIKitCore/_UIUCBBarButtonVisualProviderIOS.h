@class UIButton, _UISlotView;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton *_contentButton;
    _UISlotView *_securePasteButtonSlotView;
    BOOL _slotViewHasRemoteContent;
    id /* block */ _menuProvider;
}

+ (id)_defaultTitleAttributes;

- (id)buttonContextMenuTargetedPreview;
- (id)buttonContextMenuInteractionConfiguration;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (id)imageSymbolConfiguration;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (id)_newButton;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (void)updateSecureButton;
- (void)updateMenu;
- (id)_defaultTitleAttributes;
- (id)pointerShapeInContainer:(id)a0;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (BOOL)canUpdateMenuInPlace;
- (long long)_securePasteButtonSite;
- (void)_configureImageOrTitleFromBarItem:(id)a0;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (void)enableSecureButton:(BOOL)a0;
- (void).cxx_destruct;
- (id)contentView;

@end
