@protocol WBSURLCompletionMatchData;

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { struct BookmarkAndHistoryCompletionMatch *m_ptr; } _match;
}

@property (readonly, nonatomic) id<WBSURLCompletionMatchData> data;
@property (readonly, nonatomic) float weight;

- (id)title;
- (id)userVisibleURLString;
- (long long)visitCountScore;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)originalURLString;
- (BOOL)containsBookmark;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2;
- (id)parsecDomainIdentifier;
- (float)topSitesScore;

@end
