@class NSString, AXSiriShortcut;

@interface FKASiriShortcutKeyboardCommand : AXSSKeyboardCommand

@property (retain, nonatomic) AXSiriShortcut *shortcut;
@property (readonly, nonatomic) NSString *siriShortcutIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)commandWithSiriShortcutIdentifier:(id)a0;

- (void)perform;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSiriShortcutIdentifier:(id)a0;
- (BOOL)isEqualToCommand:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
