@class NSURL, SFText;

@interface SFLocalSearchResult : SFSearchResult {
    NSURL *_url;
    SFText *_title;
}

- (id)url;
- (id)title;
- (void)setUrl:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)initWithCompletionMatch:(id)a0;

@end
