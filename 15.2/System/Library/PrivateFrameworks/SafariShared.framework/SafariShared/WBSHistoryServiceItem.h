@class NSString, NSData;

@interface WBSHistoryServiceItem : WBSHistoryServiceObject

@property (nonatomic) long long visitCount;
@property (nonatomic) long long visitCountScore;
@property (nonatomic) long long statusCode;
@property (nonatomic) BOOL shouldRecomputeDerivedVisitCountScores;
@property (readonly, nonatomic) NSString *url;
@property (copy, nonatomic) NSData *dailyVisitCounts;
@property (copy, nonatomic) NSData *weeklyVisitCounts;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSQLRow:(id)a0;

@end
