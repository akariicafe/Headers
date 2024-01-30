@class UIColor, NSString, NSArray, UIImage, UIView, NSAttributedString;
@protocol SFSettingsAlertItemView;

@interface _SFSettingsAlertItem : NSObject

@property (weak, nonatomic) UIView<SFSettingsAlertItemView> *view;
@property (retain, nonatomic) id controller;
@property (copy, nonatomic) id /* block */ viewConfigurationBlock;
@property (copy, nonatomic) NSString *textStyle;
@property (copy, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) NSArray *subItems;
@property (readonly, weak, nonatomic) _SFSettingsAlertItem *group;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (id)buttonWithTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 handler:(id /* block */)a3;
+ (id)buttonWithAttributedTitle:(id)a0 textStyle:(id)a1 icon:(id)a2 handler:(id /* block */)a3;
+ (id)stepperWithController:(id)a0 handler:(id /* block */)a1;
+ (id)optionsGroupWithTitle:(id)a0 controller:(id)a1;
+ (id)itemWithCustomView:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)_updateButtonTitle;
- (void)updateOptionsGroupDetailLabel;

@end
