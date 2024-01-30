@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    BOOL _shouldPreload;
}

- (BOOL)isTopHit;
- (BOOL)shouldPreload;
- (id)parsecDomainIdentifier;
- (id)initWithBookmarkAndHistoryCompletionMatch:(struct Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > { struct BookmarkAndHistoryCompletionMatch *x0; } *)a0 userInput:(id)a1 forQueryID:(long long)a2 shouldPreload:(BOOL)a3;

@end
