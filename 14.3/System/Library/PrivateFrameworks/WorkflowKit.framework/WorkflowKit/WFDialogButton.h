@class NSString;

@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;

+ (id)cancelButton;
+ (id)doneButton;
+ (id)okButton;
+ (id)defaultButtonWithTitle:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 style:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
