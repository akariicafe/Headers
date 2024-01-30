@protocol _SSURLCompletionMatch;

@interface SFLocalCompletionMatch : WBSURLCompletionMatch {
    id<_SSURLCompletionMatch> _completionMatch;
}

- (id)title;
- (id)userVisibleURLString;
- (void).cxx_destruct;
- (id)originalURLString;
- (long long)matchLocation;
- (id)initWithCompletionMatch:(id)a0;

@end
