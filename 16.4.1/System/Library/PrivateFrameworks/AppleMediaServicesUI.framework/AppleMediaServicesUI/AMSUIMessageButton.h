@class AMSDialogAction, UIFont, UIColor;

@interface AMSUIMessageButton : AMSUICommonButton

@property (nonatomic) unsigned long long messageStyle;
@property (nonatomic) BOOL isFooterButton;
@property (readonly, nonatomic) AMSDialogAction *dialogAction;
@property (retain, nonatomic) UIFont *preferredFont;
@property (retain, nonatomic) UIColor *preferredForegroundColor;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;

- (void)_refresh;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_symbolConfiguration;
- (void).cxx_destruct;
- (id)_closeImage;
- (void)_setLocalOverrideTraitCollection:(id)a0;
- (id)_chevronImage;
- (id)_appendChevronToString:(id)a0;
- (void)_axSettingsDidUpdate:(id)a0;
- (id)_defaultContentColor;
- (id)_defaultIconColor;
- (id)_defaultTextFont;
- (void)_endObservations;
- (void)_setAXSettings;
- (void)_setAccessibilityIdentifier;
- (void)_setImagePadding;
- (void)_setupWithDialogAction:(id)a0;
- (void)_startObservations;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (BOOL)isDefaultCloseButton;
- (void)setFooterStyle;

@end
