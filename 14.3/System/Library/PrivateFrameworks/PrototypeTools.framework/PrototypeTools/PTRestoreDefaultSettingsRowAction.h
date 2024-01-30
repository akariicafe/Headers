@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

@property (readonly, nonatomic) NSString *settingsKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)actionWithSettingsKeyPath:(id)a0;
+ (id)action;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id /* block */)defaultHandler;
- (void)encodeWithCoder:(id)a0;

@end
