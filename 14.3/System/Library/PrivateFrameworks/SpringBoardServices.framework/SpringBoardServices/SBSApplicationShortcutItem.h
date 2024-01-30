@class NSString, NSDictionary, NSData, SBSApplicationShortcutIcon;

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying>

@property (retain, nonatomic) NSData *userInfoData;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) SBSApplicationShortcutIcon *icon;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long activationMode;
@property (copy, nonatomic) NSString *bundleIdentifierToLaunch;
@property (copy, nonatomic) NSString *targetContentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_staticApplicationShortcutItemsFromInfoPlistEntry:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)_localizeWithHandler:(id /* block */)a0;

@end
