@class NSDictionary, UIAction, UILayoutGuide, UIBarButtonItemGroup, UIView, UIColor, NSString, NSSet, _UIBarButtonItemAppearanceStorage, UINavigationItem, NSArray, UIMenu, UIToolbarButton, UIImage;
@protocol _UIBarButtonItemViewOwner;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
    NSString *_title;
    NSSet *_possibleTitles;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _landscapeImagePhoneInsets;
    double _width;
    UIView *_view;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    struct { unsigned char enabled : 1; unsigned char style : 3; unsigned char isSystemItem : 1; unsigned char systemItem : 7; unsigned char viewIsCustom : 1; unsigned char isMinibarView : 1; unsigned char disableAutosizing : 1; unsigned char selected : 1; unsigned char menuIsPrimary : 2; unsigned char imageHasEffects : 1; unsigned char actsAsFakeBackButton : 1; unsigned char springLoaded : 1; unsigned char showsChevron : 1; unsigned char wantsThreeUp : 1; } _barButtonItemFlags;
}

@property (copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles;
@property (readonly, nonatomic) BOOL _viewWantsLetterpressImage;
@property (readonly, weak, nonatomic) UIBarButtonItemGroup *buttonGroup;
@property (readonly, copy, nonatomic) NSString *_resolvedLargeContentSizeTitle;
@property (copy, nonatomic, setter=_setLargeContentSizeTitle:) NSString *_largeContentSizeTitle;
@property (readonly, nonatomic) BOOL _needsViewUpdateForLetterpressImage;
@property (retain, nonatomic) UIView *view;
@property (readonly, nonatomic) BOOL isCustomViewItem;
@property (readonly, nonatomic) BOOL isSpaceItem;
@property (nonatomic) BOOL isMinibarView;
@property (weak, nonatomic, setter=_setOwningNavigationItem:) UINavigationItem *_owningNavigationItem;
@property (weak, nonatomic, setter=_setOwningButtonGroup:) UIBarButtonItemGroup *_owningButtonGroup;
@property (weak, nonatomic, setter=_setViewOwner:) id<_UIBarButtonItemViewOwner> _viewOwner;
@property (readonly, nonatomic) BOOL groupRepresentative;
@property (copy, nonatomic, setter=_setAutoValidationHandler:) id /* block */ _autoValidationHandler;
@property (retain, nonatomic, setter=_setPopoverLayoutGuide:) UILayoutGuide *_popoverLayoutGuide;
@property (copy, nonatomic, setter=_setBackButtonAlternateTitles:) NSArray *_backButtonAlternateTitles;
@property (readonly, nonatomic) UIView *_viewForPresenting;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _rectForPresenting;
@property (readonly, nonatomic) BOOL _menuIsPrimary;
@property (nonatomic, getter=_actsAsFakeBackButton, setter=_setActsAsFakeBackButton:) BOOL _actsAsFakeBackButton;
@property (nonatomic, getter=_showsChevron, setter=_setShowsChevron:) BOOL _showsChevron;
@property (nonatomic, getter=_wantsThreeUp, setter=_setWantsThreeUp:) BOOL _wantsThreeUp;
@property (readonly, nonatomic, getter=_isFloatable) BOOL _floatable;
@property (readonly, nonatomic, getter=_isFloating) BOOL _floating;
@property (readonly, nonatomic) UIView *_configuredFloatableView;
@property (readonly, nonatomic) UIView *_referenceView;
@property (nonatomic, setter=_setToolbarCharge:) double _toolbarCharge;
@property (nonatomic, setter=_setMinimumWidth:) double _minimumWidth;
@property (nonatomic, setter=_setMaximumWidth:) double _maximumWidth;
@property (nonatomic, setter=_setFlexible:) BOOL _flexible;
@property (nonatomic, setter=_setShowsBackButtonIndicator:) BOOL _showsBackButtonIndicator;
@property (nonatomic, setter=_setHidden:) BOOL _hidden;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property (nonatomic, getter=_width, setter=_setWidth:) double _width;
@property (readonly, nonatomic) BOOL isSystemItem;
@property (readonly, nonatomic) long long systemItem;
@property (copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems;
@property (copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property (retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation;
@property (nonatomic) BOOL selected;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets { double top; double left; double bottom; double right; } _additionalSelectionInsets;
@property (nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property (copy, nonatomic, setter=_setGestureRecognizers:) NSArray *_gestureRecognizers;
@property (copy, nonatomic, setter=_setInteractions:) NSArray *_interactions;
@property (copy, nonatomic) UIMenu *secondaryActions;
@property (nonatomic) BOOL secondaryActionsArePrimary;
@property (copy, nonatomic, setter=_setSecondaryActionsProvider:) id /* block */ _secondaryActionsProvider;
@property (nonatomic) long long style;
@property (nonatomic) double width;
@property (copy, nonatomic) NSSet *possibleTitles;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (copy, nonatomic) UIAction *primaryAction;
@property (copy, nonatomic) UIMenu *menu;
@property (retain, nonatomic) UIColor *tintColor;

+ (void)_getSystemItemStyle:(long long *)a0 title:(id *)a1 image:(id *)a2 selectedImage:(id *)a3 action:(SEL *)a4 forBarStyle:(long long)a5 landscape:(BOOL)a6 alwaysBordered:(BOOL)a7 usingSystemItem:(long long)a8 usingItemStyle:(long long)a9;
+ (id)_appearanceBlindViewClasses;
+ (Class)classForNavigationButton;
+ (Class)classForToolbarButton;
+ (id)fixedSpaceItemOfWidth:(double)a0;
+ (id)flexibleSpaceItem;

- (BOOL)hasTitle;
- (id)_appearanceStorage;
- (void)_getSystemItemStyle:(long long *)a0 title:(id *)a1 image:(id *)a2 selectedImage:(id *)a3 action:(SEL *)a4 forBarStyle:(long long)a5 landscape:(BOOL)a6 alwaysBordered:(BOOL)a7;
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a0 forBarStyle:(long long)a1 landscape:(BOOL)a2 alwaysBordered:(BOOL)a3;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void)setBackButtonBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)a0;
- (id)init;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (BOOL)hasImage;
- (id)initWithImage:(id)a0 landscapeImagePhone:(id)a1 style:(long long)a2 target:(id)a3 action:(SEL)a4;
- (void)setBackgroundVerticalPositionAdjustment:(double)a0 forBarMetrics:(long long)a1;
- (void).cxx_destruct;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)a0;
- (void)dealloc;
- (id)backButtonBackgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 style:(long long)a2 barMetrics:(long long)a3;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { double x0; double x1; } *)a0 imageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 landscape:(BOOL)a2;
- (struct UIOffset { double x0; double x1; })backButtonTitlePositionAdjustmentForBarMetrics:(long long)a0;
- (id)nextResponder;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)a0;
- (id)initWithBarButtonSystemItem:(long long)a0 primaryAction:(id)a1;
- (id)initWithBarButtonSystemItem:(long long)a0 target:(id)a1 action:(SEL)a2;
- (id)backgroundImageForState:(unsigned long long)a0 style:(long long)a1 barMetrics:(long long)a2;
- (void)setBackgroundImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (id)_foregroundColorForLetterpressWithView:(id)a0;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (id)_miniImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (unsigned long long)hash;
- (id)_backgroundImageForState:(unsigned long long)a0 compact:(BOOL)a1 type:(long long)a2;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithImage:(id)a0 style:(long long)a1 target:(id)a2 action:(SEL)a3;
- (id)description;
- (void)_setButtonGroup:(id)a0 isRepresentative:(BOOL)a1;
- (id)initWithBarButtonSystemItem:(long long)a0 menu:(id)a1;
- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (struct UIOffset { double x0; double x1; })titlePositionAdjustmentForBarMetrics:(long long)a0;
- (id)backgroundImageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (void)setTitle:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })largeContentSizeImageInsets;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSpringLoaded;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)resolvedTitle;
- (id)itemVariation;
- (id)window;
- (id)largeContentSizeImage;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)createViewForNavigationItem:(id)a0;
- (void)setSpringLoaded:(BOOL)a0;
- (id)_configuredFloatableView;
- (BOOL)_isImageBarButtonItem;
- (void)_updateView;
- (void)_connectInterfaceBuilderEventConnection:(id)a0;
- (id)initWithCustomView:(id)a0;
- (void)_setMiniImage:(id)a0;
- (id)_referenceView;
- (void)setImage:(id)a0;
- (void)_triggerActionForEvent:(id)a0;
- (void)_executeValidationHandler;
- (void)_setSystemItem:(long long)a0;
- (void)setLandscapeImagePhone:(id)a0;
- (void)_sendAction:(id)a0 withEvent:(id)a1;
- (void)setLargeContentSizeImage:(id)a0;
- (id)_itemForPresenting;
- (id)landscapeImagePhone;
- (id)image;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)title;
- (void)_setEnclosingBar:(id)a0 onItem:(id)a1;
- (id)createViewForToolbar:(id)a0;
- (id)initWithPrimaryAction:(id)a0;
- (id)initWithTitle:(id)a0 menu:(id)a1;
- (id)_imageForState:(unsigned long long)a0 compact:(BOOL)a1 type:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })landscapeImagePhoneInsets;
- (id)initWithImage:(id)a0 menu:(id)a1;
- (BOOL)_resizesBackgroundImage;
- (void)encodeWithCoder:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_miniImageInsets;
- (void)_setToolbarChange:(double)a0;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
