@class UIButton, _UISlotView;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton *_contentButton;
    _UISlotView *_securePasteButtonSlotView;
    BOOL _slotViewHasRemoteContent;
    id /* block */ _menuProvider;
}

+ (id)_defaultTitleAttributes;

- (long long)_securePasteButtonSite;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (id)buttonContextMenuTargetedPreview;
- (BOOL)shouldSuppressPointerSpecularFilter;
- (void)enableSecureButton:(BOOL)a0;
- (id)buttonContextMenuInteractionConfiguration;
- (void)updateMenu;
- (void)updateSecureButton;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)canUpdateMenuInPlace;
- (void)_configureImageOrTitleFromBarItem:(id)a0;
- (id)imageSymbolConfiguration;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (id)contentView;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (id)_newButtonSecure:(BOOL)a0 orDictation:(BOOL)a1;
- (id)pointerShapeInContainer:(id)a0;
- (id)_defaultTitleAttributes;
- (void).cxx_destruct;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;

@end
