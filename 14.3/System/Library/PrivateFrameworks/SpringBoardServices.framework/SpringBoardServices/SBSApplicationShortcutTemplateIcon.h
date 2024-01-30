@class NSString;

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *templateImageName;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initForSubclass;
- (id)initWithTemplateImageName:(id)a0;

@end
