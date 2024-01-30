@class NSArray;

@interface FCReadingHistorySyncResults : NSObject

@property (retain, nonatomic) NSArray *modifiedArticleIDs;
@property (retain, nonatomic) NSArray *deletedArticleIDs;
@property (retain, nonatomic) NSArray *newlyCreatedArticleIDs;

- (void).cxx_destruct;
- (id)initWithModifiedArticleIDs:(id)a0 deletedArticleIDs:(id)a1 newArticleIDs:(id)a2;

@end
