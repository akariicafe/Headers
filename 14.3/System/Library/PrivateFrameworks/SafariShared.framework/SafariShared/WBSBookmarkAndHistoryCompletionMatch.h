@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > { struct BookmarkAndHistoryCompletionMatch *m_ptr; } _match;
}

@property (readonly, nonatomic) id<WBSURLCompletionMatchData> data;
@property (readonly, nonatomic) float weight;

- (void).cxx_destruct;
- (id)originalURLString;
- (id).cxx_construct;
- (id)parsecDomainIdentifier;
- (id)userVisibleURLString;
- (id)initWithBookmarkAndHistoryCompletionMatch:(struct Ref<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::DumbPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch> > { struct BookmarkAndHistoryCompletionMatch *x0; } *)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (id)title;

@end
