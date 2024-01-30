@class UIButton;

@interface _UIUCBBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
    UIButton *_contentButton;
    id /* block */ _menuProvider;
}

+ (id)_defaultTitleAttributes;

- (id)pointerShapeInContainer:(id)a0;
- (void)updateButton:(id)a0 forEnabledState:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateMenu;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (id)buttonContextMenuInteractionConfiguration;
- (id)_newButton;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (void)_configureImageOrTitleFromBarItem:(id)a0;
- (void)pointerWillExit:(id)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)canUpdateMenuInPlace;
- (id)buttonContextMenuStyleFromDefaultStyle:(id)a0;
- (void)pointerWillEnter:(id)a0;
- (id)_defaultTitleAttributes;
- (id)buttonContextMenuTargetedPreview;
- (id)contentView;

@end
