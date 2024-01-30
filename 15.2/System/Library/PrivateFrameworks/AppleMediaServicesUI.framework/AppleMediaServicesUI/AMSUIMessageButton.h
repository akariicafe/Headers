@class AMSDialogAction, UIFont;

@interface AMSUIMessageButton : AMSUICommonButton

@property (nonatomic) unsigned long long messageStyle;
@property (readonly, nonatomic) AMSDialogAction *dialogAction;
@property (retain, nonatomic) UIFont *titleFont;

- (id)_closeImage;
- (void).cxx_destruct;
- (id)_symbolConfiguration;
- (id)_chevronImage;
- (void)_setupWithDialogAction:(id)a0;
- (id)_defaultTextFont;
- (id)_defaultContentColor;
- (id)initWithDialogAction:(id)a0 messageStyle:(unsigned long long)a1;
- (void)setFooterStyle;
- (BOOL)isDefaultCloseButton;

@end
