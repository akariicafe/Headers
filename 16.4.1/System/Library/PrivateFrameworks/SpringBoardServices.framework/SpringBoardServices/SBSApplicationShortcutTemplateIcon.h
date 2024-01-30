@class NSString;

@interface SBSApplicationShortcutTemplateIcon : SBSApplicationShortcutIcon

@property (readonly, nonatomic) NSString *templateImageName;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTemplateImageName:(id)a0;
- (id)_initForSubclass;

@end
