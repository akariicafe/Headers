@interface DBSHomeScreenPadListController : DBSHomeScreenBaseListController

- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void)continuousExposeEnablementChanged:(id)a0;
- (id)continuousExposeState:(id)a0;
- (id)isLargeIconLayoutEnabled:(id)a0;
- (id)rearrangeAndConfigureContinuousExposeWithSpecifiers:(id)a0;
- (void)setLargeIconLayoutEnabled:(id)a0 specifier:(id)a1;
- (void)setShowAppLibraryInDock:(id)a0 specifier:(id)a1;
- (void)setShowRecentAppsInDock:(id)a0 specifier:(id)a1;

@end
