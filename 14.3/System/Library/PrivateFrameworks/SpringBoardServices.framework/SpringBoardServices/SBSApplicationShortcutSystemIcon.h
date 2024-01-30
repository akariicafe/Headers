@class NSString;

@interface SBSApplicationShortcutSystemIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *systemImageName;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (id)_initForSubclass;

@end
