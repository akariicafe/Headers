@class NSDictionary, NSArray, NSDate;

@interface FCTopStoriesGroupConfig : FCGroupConfig

@property (retain, nonatomic) NSDictionary *topStoriesMetadataByArticleID;
@property (readonly, nonatomic) NSArray *mandatoryArticleIDPairs;
@property (readonly, nonatomic) NSArray *optionalArticleIDs;
@property (readonly, nonatomic) NSDate *publishDate;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
