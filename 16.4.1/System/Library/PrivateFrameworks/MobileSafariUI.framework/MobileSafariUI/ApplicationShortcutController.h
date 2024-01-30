@class BrowserController;

@interface ApplicationShortcutController : NSObject

@property (weak, nonatomic) BrowserController *browserController;

+ (id)_shortcutItems;
+ (void)updateShortcutItemsIfNeeded;
+ (id)_shortcutItemWithType:(id)a0 systemImageName:(id)a1;

- (void).cxx_destruct;
- (BOOL)_handleActionWithType:(id)a0 forShortcut:(BOOL)a1;
- (void)_openNewEmptyTabWithURLFieldFocused:(BOOL)a0 privateBrowsingState:(long long)a1;
- (void)_showBookmarksPanelWithSelectedCollection:(id)a0;
- (BOOL)handleActionWithType:(id)a0 forShortcut:(BOOL)a1;
- (BOOL)handleShortcutItemWithType:(id)a0;

@end
