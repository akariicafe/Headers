@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel

@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSArray *scores;

+ (id)schema;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
