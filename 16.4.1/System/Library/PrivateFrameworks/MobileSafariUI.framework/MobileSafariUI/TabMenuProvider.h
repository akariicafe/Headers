@interface TabMenuProvider : NSObject

+ (id)_shareCommand;
+ (id)_bottomMenuForTabDocument:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;
+ (id)_closeActionForTab:(id)a0 inBackgroundTabGroup:(id)a1 dataSource:(id)a2;
+ (id)_closeActionForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)_closeOtherTabsActionForTab:(id)a0 inBackgroundTabGroup:(id)a1 dataSource:(id)a2;
+ (id)_closeOtherTabsActionForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)_copyMenuForTabGroupTab:(id)a0;
+ (id)_mainMenuForTabDocument:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;
+ (id)_moveMenuForTabGroupTab:(id)a0 inTabGroup:(id)a1 dataSource:(id)a2;
+ (id)_pinTabActionForTabGroupTab:(id)a0 inTabGroup:(id)a1 dataSource:(id)a2;
+ (id)_presentBookmarksModalActionForTabDocument:(id)a0;
+ (id)_readerActionForTabDocument:(id)a0;
+ (id)_sortMenuForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)_sortMenuForTabGroupTab:(id)a0 dataSource:(id)a1 inTabGroup:(id)a2;
+ (id)_stopReloadActionForTabDocument:(id)a0;
+ (id)_toggleContentBlockersActionForTab:(id)a0;
+ (id)_toggleVoiceSearchActionForTabDocument:(id)a0;
+ (id /* block */)actionProviderForTabDocument:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;
+ (id /* block */)actionProviderForTabGroupTab:(id)a0 inTabGroup:(id)a1 dataSource:(id)a2 options:(unsigned long long)a3;
+ (id)moveMenuForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)pinTabActionForTabDocument:(id)a0 dataSource:(id)a1;

@end
