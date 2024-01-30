@class HUColorPickerView, UIView, NSString, UISegmentedControl, HFColorPaletteColor, HFColorPalette, HUQuickControlColorViewProfile, HUColorLinearPaletteView, NSIndexPath;
@protocol HUQuickControlColorViewInteractionDelegate, HUQuickControlInteractiveView;

@interface HUQuickControlColorView : UIView <HUQuickControlColorPickerViewInteractionDelegate, HUQuickControlColorPaletteViewInteractionDelegate, HUQuickControlInteractiveView>

@property (retain, nonatomic) HFColorPalette *colorPalette;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor;
@property (retain, nonatomic) id originalValue;
@property (retain, nonatomic) HFColorPalette *originalPalette;
@property (retain, nonatomic) NSIndexPath *originalSelectedColorIndexPath;
@property (nonatomic) BOOL showPickerModeControl;
@property (retain, nonatomic) HUColorLinearPaletteView *colorLinearPaletteView;
@property (retain, nonatomic) HUColorPickerView *colorPickerView;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *activeView;
@property (retain, nonatomic) UISegmentedControl *colorPickerModeSegmentedControl;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive;
@property (weak, nonatomic) id<HUQuickControlColorViewInteractionDelegate> interactionDelegate;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic, getter=isSelectedColorInPalette) BOOL selectedColorInPalette;
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile;
@property (readonly, nonatomic) NSIndexPath *linearPaletteViewSelectedColorIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

- (id)initWithProfile:(id)a0;
- (void)layoutSubviews;
- (void)_updateLayout;
- (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (id)initWithProfile:(id)a0 colorPalette:(id)a1;
- (void)storeCurrentColorInformationAsOriginalValues;
- (void)updateSelectedColorIndexPathToIndexPath:(id)a0;
- (void)controlView:(id)a0 interactionStateDidChange:(BOOL)a1 forFirstTouch:(BOOL)a2;
- (void)controlView:(id)a0 valueDidChange:(id)a1;
- (void)presentFullColorViewForControlView:(id)a0 selectedColorIndexPath:(id)a1;
- (void)controlView:(id)a0 didSelectColorAtIndexPath:(id)a1;
- (void)controlView:(id)a0 colorPaletteDidChange:(id)a1;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (void)_updateColorPicker;
- (void)_updateVisibleViews;
- (void)controlView:(id)a0 colorPickerModeDidChange:(unsigned long long)a1;
- (void)cancelColorPicking;

@end
