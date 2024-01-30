@class NSDictionary, NSArray, NSDate;

@interface FCTopStoriesGroupConfig : FCGroupConfig

@property (retain, nonatomic) NSDictionary *topStoriesMetadataByArticleID;
@property (readonly, nonatomic) NSArray *mandatoryArticleIDPairs;
@property (readonly, nonatomic) NSArray *optionalArticleIDs;
@property (readonly, nonatomic) NSDate *publishDate;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
