@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    BOOL _shouldPreload;
}

- (BOOL)isTopHit;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2 shouldPreload:(BOOL)a3;
- (id)parsecDomainIdentifier;
- (BOOL)shouldPreload;

@end
