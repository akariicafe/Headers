@class BrowserController;

@interface ApplicationShortcutController : NSObject

@property (weak, nonatomic) BrowserController *browserController;

+ (void)updateShortcutItemsIfNeeded;
+ (id)_shortcutItems;
+ (id)_shortcutItemWithType:(id)a0 systemImageName:(id)a1;

- (void)_showBookmarksPanelWithSelectedCollection:(id)a0;
- (BOOL)handleActionWithType:(id)a0 forShortcut:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_handleActionWithType:(id)a0 forShortcut:(BOOL)a1;
- (BOOL)handleShortcutItemWithType:(id)a0;
- (void)_openNewEmptyTabWithURLFieldFocused:(BOOL)a0 privateBrowsingState:(long long)a1;

@end
