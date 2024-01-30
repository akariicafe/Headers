@class UIView, NSString, NSArray, NSAttributedString, UIImage, UIImageView, UIColor;
@protocol SFSettingsAlertItemView;

@interface _SFSettingsAlertItem : NSObject

@property (weak, nonatomic) UIView<SFSettingsAlertItemView> *view;
@property (retain, nonatomic) id controller;
@property (copy, nonatomic) id /* block */ viewConfigurationBlock;
@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) NSArray *subItems;
@property (readonly, weak, nonatomic) _SFSettingsAlertItem *group;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long actionType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (copy, nonatomic) NSArray *componentsArrangement;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIImageView *statusImageView;

+ (id)buttonWithTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 action:(long long)a3 handler:(id /* block */)a4;
+ (id)buttonWithAttributedTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 action:(long long)a3 handler:(id /* block */)a4;
+ (id)singleLineButtonWithTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 action:(long long)a3 handler:(id /* block */)a4;
+ (id)stepperWithController:(id)a0 action:(long long)a1 handler:(id /* block */)a2;
+ (id)optionsGroupWithTitle:(id)a0 action:(long long)a1 subItemAction:(long long)a2 controller:(id)a3;
+ (id)itemWithCustomView:(id)a0;

- (void).cxx_destruct;
- (void)_updateButtonTitle;
- (id)initWithType:(long long)a0 action:(long long)a1;
- (void)_buttonCommonInitWithTextStyle:(id)a0 icon:(id)a1 handler:(id /* block */)a2;
- (void)updateOptionsGroupDetailLabel;

@end
