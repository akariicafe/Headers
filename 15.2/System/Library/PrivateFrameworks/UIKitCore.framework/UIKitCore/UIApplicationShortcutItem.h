@class NSString, NSDictionary, NSData, SBSApplicationShortcutItem, UIApplicationShortcutIcon;

@interface UIApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) UIApplicationShortcutIcon *icon;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSData *userInfoData;
@property (copy, nonatomic) id targetContentIdentifier;
@property (readonly, nonatomic) unsigned long long activationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)a0;
+ (unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithType:(id)a0 localizedTitle:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSBSApplicationShortcutItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2 icon:(id)a3 userInfo:(id)a4;
- (id)_initWithType:(id)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2 icon:(id)a3 userInfoData:(id)a4 activationMode:(unsigned long long)a5 targetContentIdentifier:(id)a6;

@end
