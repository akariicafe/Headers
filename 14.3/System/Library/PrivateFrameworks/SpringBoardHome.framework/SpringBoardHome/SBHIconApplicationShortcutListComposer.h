@interface SBHIconApplicationShortcutListComposer : NSObject

+ (id)homeScreenDefaults;
+ (id)composedShortcutsForDownloadingApplicationWithBundleIdentifier:(id)a0 iconDisplayName:(id)a1 prioritizationIsAvailable:(BOOL)a2 downloadingInformationAgent:(id)a3 canShare:(BOOL)a4;
+ (id)filteredApplicationShortcutItemsWithStaticApplicationShortcutItems:(id)a0 dynamicApplicationShortcutItems:(id)a1;
+ (id)composedShortcutsForApplicationWithBundleIdentifier:(id)a0 iconDisplayName:(id)a1 staticItems:(id)a2 dynamicItems:(id)a3 applicationItemID:(unsigned long long)a4 numberOfDisplayItemsInSwitcher:(long long)a5 supportsMultipleWindows:(BOOL)a6 isSystemApplication:(BOOL)a7 isInternalApplication:(BOOL)a8 isApplicationInBeta:(BOOL)a9 isApplicationHidden:(BOOL)a10 removeStyle:(long long)a11;
+ (id)composedShortcutsForBookmarkIcon:(id)a0 withDisplayName:(id)a1 removeStyle:(long long)a2;
+ (BOOL)supportsMultiwindowShortcut;
+ (id)composedShortcutsForFolderIcon:(id)a0 iconImageCache:(id)a1 iconManagerAllowsEditing:(BOOL)a2 removeStyle:(long long)a3 badgeViewGenerator:(id /* block */)a4;
+ (id)composedShortcutsForWidgetIcon:(id)a0 additionalApplicationShortcutItems:(id)a1 widgetIconSupportsConfiguration:(BOOL)a2 iconManagerAllowsEditing:(BOOL)a3;

@end
