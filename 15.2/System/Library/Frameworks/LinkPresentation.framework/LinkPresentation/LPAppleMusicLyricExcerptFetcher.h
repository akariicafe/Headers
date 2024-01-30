@class MPStoreLyricsSnippetURLComponents, NSOperation;

@interface LPAppleMusicLyricExcerptFetcher : LPFetcher {
    id /* block */ _completionHandler;
    NSOperation *_operation;
}

@property (retain, nonatomic) MPStoreLyricsSnippetURLComponents *lyricComponents;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)completedWithLyrics:(id)a0;

@end
