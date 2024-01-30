@class UIAction, UIMenu, UIButtonConfiguration;

@interface UIContentUnavailableButtonProperties : NSObject <NSCopying, NSSecureCoding> {
    struct { unsigned char hasCustomizedShowsMenuAsPrimaryAction : 1; unsigned char hasCustomizedEnabled : 1; unsigned char hasCustomizedRole : 1; } _buttonFlags;
    BOOL _showsMenuAsPrimaryAction;
    BOOL _enabled;
    UIButtonConfiguration *_configuration;
    UIAction *_primaryAction;
    UIMenu *_menu;
    long long _role;
    UIButtonConfiguration *_defaultConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIButtonConfiguration *configuration;
@property (copy, nonatomic) UIAction *primaryAction;
@property (copy, nonatomic) UIMenu *menu;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long role;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
