@class NSString;

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *templateImageName;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initForSubclass;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTemplateImageName:(id)a0;
- (unsigned long long)hash;

@end
