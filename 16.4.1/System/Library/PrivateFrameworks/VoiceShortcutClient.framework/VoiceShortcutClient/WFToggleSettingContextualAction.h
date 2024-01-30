@interface WFToggleSettingContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;
@property (readonly, nonatomic) unsigned long long operation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)uniqueIdentifier;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1 unconfigured:(BOOL)a2;
- (BOOL)isReversible;

@end
