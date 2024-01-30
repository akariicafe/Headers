@class NSString;

@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *systemImageName;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initForSubclass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemImageName:(id)a0;
- (unsigned long long)hash;

@end
