@class NSString, NSDictionary, NSArray;

@interface VUISportsScoreboardViewModel : NSObject

@property (readonly, nonatomic) NSString *canonicalId;
@property (readonly, nonatomic) NSDictionary *leagueContext;
@property (readonly, nonatomic) NSArray *scores;
@property (readonly, nonatomic) BOOL showScoreboard;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsContextDictionary;

@end
