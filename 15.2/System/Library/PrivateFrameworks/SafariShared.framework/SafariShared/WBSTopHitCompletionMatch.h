@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    BOOL _shouldPreload;
}

- (BOOL)isTopHit;
- (id)parsecDomainIdentifier;
- (BOOL)shouldPreload;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2 shouldPreload:(BOOL)a3;

@end
