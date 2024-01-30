@class NSDate;

@interface ATXNotificationsSuggestionScoreCache : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithScore:(double)a0;

@end
