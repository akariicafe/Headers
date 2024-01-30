@class NSString, SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <BSXPCCoding, NSCopying>

@property (readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconWithTemplateImageName:(id)a0;
+ (id)iconWithSystemImageName:(id)a0;
+ (id)iconWithCustomImage:(id)a0 isTemplate:(BOOL)a1;
+ (id)iconWithCustomImage:(id)a0;
+ (id)iconWithType:(long long)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSBSApplicationShortcutIcon:(id)a0;
- (void).cxx_destruct;

@end
