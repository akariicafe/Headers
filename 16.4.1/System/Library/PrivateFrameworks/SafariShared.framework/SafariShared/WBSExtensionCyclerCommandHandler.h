@class NSString;

@interface WBSExtensionCyclerCommandHandler : NSObject <WBSCyclerTestTarget>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createBookmarkListWithTitle:(id)a0 inListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)createBookmarkWithTitle:(id)a0 url:(id)a1 inListWithIdentifier:(id)a2 atIndex:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)clearBookmarksWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)deleteBookmarkWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchTopLevelBookmarkList:(id /* block */)a0;
- (void)moveBookmarkWithIdentifier:(id)a0 intoListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setTitle:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)setURL:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)a0;

@end
