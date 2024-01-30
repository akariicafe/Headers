@class NSString;

@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *systemImageName;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (id)_initForSubclass;

@end
