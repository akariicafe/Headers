@class UIResponder, NSString, NSIndexSet, UIEvent, UIImage, NSArray, UIViewController;

@interface UIKeyCommand : UICommand {
    NSString *_lastLayout;
    NSIndexSet *_keyCodes;
    SEL _upAction;
    BOOL _repeatable;
    BOOL _isPlaceholder;
    long long _buttonType;
    UIEvent *_triggeringEvent;
    UIResponder *_originatingResponder;
    NSString *_segueIdentifier;
    UIViewController *_controllerForSegue;
    BOOL _handleAfterKeyEvent;
}

@property (readonly, nonatomic) NSString *_layoutAwareInput;
@property (readonly, nonatomic) long long _layoutAwareModifierFlags;
@property (readonly, nonatomic) NSString *discoverabilityInput;
@property (readonly, nonatomic) SEL upAction;
@property (readonly, nonatomic) BOOL repeatable;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) NSIndexSet *_keyCodes;
@property (readonly, nonatomic) long long _buttonType;
@property (readonly, nonatomic) UIEvent *_triggeringEvent;
@property (readonly, nonatomic) NSString *_segueIdentifier;
@property (readonly, nonatomic) UIViewController *_controllerForSegue;
@property (readonly, nonatomic) BOOL _handleAfterKeyEvent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *discoverabilityTitle;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) id propertyList;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSArray *alternates;

+ (id)keyCommandWithKeyCode:(long long)a0 modifierFlags:(long long)a1 action:(SEL)a2;
+ (id)commandWithTitle:(id)a0 imageName:(id)a1 action:(SEL)a2 input:(id)a3 modifierFlags:(long long)a4;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 segueIdentifier:(id)a2 discoverabilityTitle:(id)a3;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 action:(SEL)a2 discoverabilityTitle:(id)a3;
+ (BOOL)supportsSecureCoding;
+ (id)keyCommandWithKeyCodes:(id)a0 modifierFlags:(long long)a1 action:(SEL)a2;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 input:(id)a3 modifierFlags:(long long)a4 propertyList:(id)a5 alternates:(id)a6;
+ (id)keyCommandWithCompactInput:(id)a0 action:(SEL)a1 upAction:(SEL)a2;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 buttonType:(long long)a2;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 segueIdentifier:(id)a2;
+ (id)keyCommandWithKeyCode:(long long)a0 modifierFlags:(long long)a1 action:(SEL)a2 discoverabilityTitle:(id)a3;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 action:(SEL)a2;
+ (id)keyCommandWithKeyCodes:(id)a0 modifierFlags:(long long)a1 buttonType:(long long)a2;
+ (id)commandWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 input:(id)a3 modifierFlags:(long long)a4 propertyList:(id)a5;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 action:(SEL)a2 upAction:(SEL)a3 discoverabilityTitle:(id)a4;
+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1 action:(SEL)a2 upAction:(SEL)a3;

- (long long)_leafKeyModifierFlags;
- (id)init;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 action:(SEL)a3 propertyList:(id)a4 alternates:(id)a5 discoverabilityTitle:(id)a6 attributes:(unsigned long long)a7 state:(long long)a8;
- (void).cxx_destruct;
- (void)_setViewControllerForSegue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_nonRepeatableKeyCommand;
- (BOOL)triggerSegueIfPossible;
- (id)initWithCommand:(id)a0;
- (id)_immutableCopy;
- (id)_initWithInput:(id)a0 modifierFlags:(long long)a1 keyCodes:(id)a2 action:(SEL)a3 upAction:(SEL)a4 discoverabilityTitle:(id)a5 buttonType:(long long)a6 segueIdentifier:(id)a7;
- (void)_setOriginatingResponder:(id)a0;
- (id)nextResponder;
- (id)initWithKeyCommand:(id)a0;
- (id)_placeholderKeyCommand;
- (void)_localizeWithGSKeyboard:(struct __GSKeyboard { } *)a0;
- (id)_leafKeyInput;
- (id)initWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 input:(id)a3 modifierFlags:(long long)a4 propertyList:(id)a5 alternates:(id)a6 discoverabilityTitle:(id)a7 attributes:(unsigned long long)a8 state:(long long)a9;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 image:(id)a1 action:(SEL)a2 propertyList:(id)a3 alternates:(id)a4 discoverabilityTitle:(id)a5 attributes:(unsigned long long)a6 state:(long long)a7;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 action:(SEL)a3 input:(id)a4 modifierFlags:(long long)a5 propertyList:(id)a6 alternates:(id)a7 discoverabilityTitle:(id)a8 attributes:(unsigned long long)a9 state:(long long)a10;
- (void)_markHandleAfterKeyEvent;
- (void)_setTriggeringEvent:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
