@class NSString;

@interface SBSApplicationShortcutSystemPrivateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *systemImageName;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSystemImageName:(id)a0;
- (id)_initForSubclass;

@end
