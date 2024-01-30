@class NSString, SFSearchResult;
@protocol FCHeadlineProviding;

@interface FCArticleSearchResult : NSObject

@property (retain, nonatomic) SFSearchResult *searchResult;
@property (readonly, nonatomic) NSString *articleID;
@property (readonly, nonatomic) id<FCHeadlineProviding> deflatedHeadline;
@property (retain, nonatomic) id<FCHeadlineProviding> inflatedHeadline;

- (void).cxx_destruct;
- (id)initWithParsecSearchResult:(id)a0 cloudContext:(id)a1;

@end
