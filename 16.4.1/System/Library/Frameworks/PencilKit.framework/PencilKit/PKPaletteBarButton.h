@class UIBarButtonItem, NSString, UIView;

@interface PKPaletteBarButton : PKPaletteButton <_UIBarButtonItemViewOwner>

@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) id /* block */ menuProvider;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_imageByApplyingDefaultImageSymbolConfigurationWithImage:(id)a0;

- (void)_itemDidChangeWidth:(id)a0;
- (void)_itemDidChangeHiddenState:(id)a0;
- (void)_itemDidChangeSelectionState:(id)a0;
- (void)_itemStandardViewNeedsUpdate:(id)a0;
- (void)_itemDidChangeEnabledState:(id)a0;
- (void)_itemCustomViewDidChange:(id)a0 fromView:(id)a1;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)setTintColor:(id)a0;
- (void)layoutSubviews;
- (id)initWithBarButtonItem:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)setScalingFactor:(double)a0;
- (void)_checkCurrentBarButtonItemState;
- (void)_handleTouchUpInside:(id)a0 event:(id)a1;
- (void)_updateForButtonItemChange;
- (void)_updateMenu;

@end
