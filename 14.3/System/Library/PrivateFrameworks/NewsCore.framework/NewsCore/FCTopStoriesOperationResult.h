@class FCColorGradient, NSArray, NSDictionary, NSString, NSDate;

@interface FCTopStoriesOperationResult : NSObject

@property (copy) NSArray *mandatoryHeadlinePairs;
@property (copy) NSArray *optionalHeadlines;
@property (copy) NSDictionary *topStoriesMetadataByArticleID;
@property (copy) NSDate *publishDate;
@property (copy, nonatomic) FCColorGradient *backgroundColorGradient;
@property (readonly, copy, nonatomic) NSArray *todayFeedTopStoriesHeadlines;
@property (readonly, copy, nonatomic) FCColorGradient *darkStyleBackgroundColorGradient;
@property (readonly, copy, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)initWithTopStoriesGroupConfig:(id)a0 mandatoryHeadlinePairs:(id)a1 optionalHeadlines:(id)a2 todayFeedTopStoriesHeadlines:(id)a3 topStoriesMetadataByArticleID:(id)a4 publishDate:(id)a5 subtitle:(id)a6;

@end
