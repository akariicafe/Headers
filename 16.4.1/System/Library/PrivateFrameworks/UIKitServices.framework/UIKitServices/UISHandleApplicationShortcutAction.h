@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UISHandleApplicationShortcutAction : BSAction

@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithSBSShortcutItem:(id)a0;

@end
