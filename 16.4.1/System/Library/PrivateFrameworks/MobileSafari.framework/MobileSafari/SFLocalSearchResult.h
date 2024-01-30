@class NSURL, SFText;

@interface SFLocalSearchResult : SFSearchResult {
    NSURL *_url;
    SFText *_title;
}

- (id)url;
- (void)setUrl:(id)a0;
- (id)title;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)initWithCompletionMatch:(id)a0;

@end
