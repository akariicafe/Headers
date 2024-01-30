@class WBSWebExtensionAPIExtensionObjC, WBSWebExtensionAPIStorageObjC, WBSWebExtensionAPITabsObjC, WBSWebExtensionAPIAlarmsObjC, WBSWebExtensionAPIActionObjC, WBSWebExtensionAPIWebRequestObjC, WBSWebExtensionAPIContextMenusObjC, WBSWebExtensionAPIWebNavigationObjC, WBSWebExtensionAPILocalizationObjC, WBSWebExtensionAPINotificationsObjC, WBSWebExtensionAPIPermissionsObjC, WBSWebExtensionAPICookiesObjC, WBSWebExtensionAPIDeclarativeNetRequestObjC, WBSWebExtensionAPIRuntimeObjC, WBSWebExtensionAPICommandsObjC, WBSWebExtensionAPIWindowsObjC;

@interface WBSWebExtensionAPINamespaceObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIExtensionObjC *_extension;
    WBSWebExtensionAPIRuntimeObjC *_runtime;
    WBSWebExtensionAPIActionObjC *_browserAction;
    WBSWebExtensionAPIActionObjC *_pageAction;
    WBSWebExtensionAPIPermissionsObjC *_permissions;
    WBSWebExtensionAPITabsObjC *_tabs;
    WBSWebExtensionAPIWindowsObjC *_windows;
    WBSWebExtensionAPILocalizationObjC *_i18n;
    WBSWebExtensionAPIStorageObjC *_storage;
    WBSWebExtensionAPICommandsObjC *_commands;
    WBSWebExtensionAPIContextMenusObjC *_contextMenus;
    WBSWebExtensionAPINotificationsObjC *_notifications;
    WBSWebExtensionAPIWebNavigationObjC *_webNavigation;
    WBSWebExtensionAPIWebRequestObjC *_webRequest;
    WBSWebExtensionAPIAlarmsObjC *_alarms;
    WBSWebExtensionAPICookiesObjC *_cookies;
    WBSWebExtensionAPIDeclarativeNetRequestObjC *_declarativeNetRequest;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIExtensionObjC *extension;
@property (readonly, nonatomic) WBSWebExtensionAPIRuntimeObjC *runtime;
@property (readonly, nonatomic) WBSWebExtensionAPIActionObjC *browserAction;
@property (readonly, nonatomic) WBSWebExtensionAPIActionObjC *pageAction;
@property (readonly, nonatomic) WBSWebExtensionAPIPermissionsObjC *permissions;
@property (readonly, nonatomic) WBSWebExtensionAPITabsObjC *tabs;
@property (readonly, nonatomic) WBSWebExtensionAPIWindowsObjC *windows;
@property (readonly, nonatomic) WBSWebExtensionAPILocalizationObjC *i18n;
@property (readonly, nonatomic) WBSWebExtensionAPIStorageObjC *storage;
@property (readonly, nonatomic) WBSWebExtensionAPICommandsObjC *commands;
@property (readonly, nonatomic) WBSWebExtensionAPIContextMenusObjC *contextMenus;
@property (readonly, nonatomic) WBSWebExtensionAPIContextMenusObjC *menus;
@property (readonly, nonatomic) WBSWebExtensionAPINotificationsObjC *notifications;
@property (readonly, nonatomic) WBSWebExtensionAPIAlarmsObjC *alarms;
@property (readonly, nonatomic) WBSWebExtensionAPIWebNavigationObjC *webNavigation;
@property (readonly, nonatomic) WBSWebExtensionAPIWebRequestObjC *webRequest;
@property (readonly, nonatomic) WBSWebExtensionAPICookiesObjC *cookies;
@property (readonly, nonatomic) WBSWebExtensionAPIDeclarativeNetRequestObjC *declarativeNetRequest;

- (void).cxx_destruct;
- (BOOL)_propertyIsUnsupportedOnIOS:(id)a0;
- (BOOL)isPropertyAllowed:(id)a0;

@end
