@class NSString, AXSiriShortcut;

@interface FKASiriShortcutKeyboardCommand : AXSSKeyboardCommand

@property (retain, nonatomic) AXSiriShortcut *shortcut;
@property (readonly, nonatomic) NSString *siriShortcutIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)commandWithSiriShortcutIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (void)perform;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToCommand:(id)a0;
- (id)initWithSiriShortcutIdentifier:(id)a0;

@end
