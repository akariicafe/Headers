@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction

@property (readonly, nonatomic) NSString *settingsKeyPath;

+ (BOOL)supportsSecureCoding;
+ (id)action;
+ (id)actionWithSettingsKeyPath:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id /* block */)defaultHandler;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
