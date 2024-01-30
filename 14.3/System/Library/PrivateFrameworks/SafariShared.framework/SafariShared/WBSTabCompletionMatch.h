@class NSURL, NSString;

@interface WBSTabCompletionMatch : WBSURLCompletionMatch

@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;

+ (long long)_matchLocationForString:(id)a0 url:(id)a1 title:(id)a2;

- (void).cxx_destruct;
- (id)originalURLString;
- (id)initWithUserTypedString:(id)a0 url:(id)a1 title:(id)a2 forQueryID:(long long)a3;
- (id)userVisibleURLString;

@end
