@interface TabDocumentMenuProvider : NSObject

+ (id)_shareCommand;
+ (id /* block */)actionProviderForTabDocument:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;
+ (id)moveMenuForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)_mainMenuForTabDocument:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;
+ (id)_bottomMenuForTabDocument:(id)a0 dataSource:(id)a1 options:(unsigned long long)a2;
+ (id)_toggleVoiceSearchActionForTabDocument:(id)a0;
+ (id)_presentBookmarksModalActionForTabDocument:(id)a0;
+ (id)_sortMenuForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)_closeOtherTabsActionForTabDocument:(id)a0 dataSource:(id)a1;
+ (id)_stopReloadActionForTabDocument:(id)a0;
+ (id)_toggleContentBlockersActionForTab:(id)a0;
+ (id)_readerActionForTabDocument:(id)a0;

@end
