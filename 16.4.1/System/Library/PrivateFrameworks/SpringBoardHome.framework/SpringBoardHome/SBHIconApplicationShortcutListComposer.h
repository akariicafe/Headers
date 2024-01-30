@interface SBHIconApplicationShortcutListComposer : NSObject

+ (id)homeScreenDefaults;
+ (BOOL)supportsMultiwindowShortcut;
+ (id)composedShortcutsForApplicationWithBundleIdentifier:(id)a0 iconDisplayName:(id)a1 staticItems:(id)a2 dynamicItems:(id)a3 applicationItemID:(unsigned long long)a4 numberOfDisplayItemsInSwitcher:(long long)a5 supportsMultipleWindows:(BOOL)a6 isSystemApplication:(BOOL)a7 isInternalApplication:(BOOL)a8 isApplicationInBeta:(BOOL)a9 isApplicationHidden:(BOOL)a10 iconManagerAllowsEditing:(BOOL)a11 removeStyle:(long long)a12;
+ (id)composedShortcutsForFolderIcon:(id)a0 iconImageCache:(id)a1 iconManagerAllowsEditing:(BOOL)a2 removeStyle:(long long)a3 badgeViewGenerator:(id /* block */)a4;
+ (id)composedShortcutsForBookmarkIcon:(id)a0 withDisplayName:(id)a1 iconManagerAllowsEditing:(BOOL)a2 removeStyle:(long long)a3;
+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)a0 dynamicApplicationShortcutItems:(id)a1;
+ (id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)a0 iconDisplayName:(id)a1 applicationItemID:(unsigned long long)a2 canModifyDownloadState:(BOOL)a3 prioritizationIsAvailable:(BOOL)a4 downloadingInformationAgent:(id)a5 iconManagerAllowsEditing:(BOOL)a6 removeStyle:(long long)a7 canShare:(BOOL)a8;
+ (id)composedShortcutsForWidgetIcon:(id)a0 additionalApplicationShortcutItems:(id)a1 widgetIconSupportsConfiguration:(BOOL)a2 iconManagerAllowsEditing:(BOOL)a3 widgetSettings:(id)a4;

@end
