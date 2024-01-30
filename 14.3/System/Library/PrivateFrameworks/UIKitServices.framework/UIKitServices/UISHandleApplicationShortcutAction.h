@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UISHandleApplicationShortcutAction : BSAction

@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;

- (BOOL)isKindOfClass:(Class)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithSBSShortcutItem:(id)a0;

@end
