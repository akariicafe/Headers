@class NSString, NSData, NSDate;

@interface SPCachedResult : NSObject <SFEngagedResult>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, nonatomic) int type;
@property (readonly, copy, nonatomic) NSDate *engagementTime;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double freshnessScore;
@property (copy, nonatomic) NSData *encodedNormalizedTopic;

- (id)searchResult;
- (void).cxx_destruct;
- (id)initWithContactName:(id)a0 contactIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (id)initWithEngagedResult:(id)a0;
- (id)initWithPersonName:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (id)initWithResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3 searchString:(id)a4;
- (id)initWithResult:(id)a0 topic:(id)a1 title:(id)a2 searchString:(id)a3;
- (id)initWithTitle:(id)a0 type:(int)a1 score:(id)a2 searchString:(id)a3;
- (id)recentTopic;

@end
