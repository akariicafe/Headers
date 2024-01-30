@class NSPredicate, NSString, NSDate;

@interface TPSAnalyticsUsageInfo : NSObject

@property (retain, nonatomic) NSDate *firstShownDate;
@property (retain, nonatomic) NSPredicate *usagePredicate;
@property (copy, nonatomic) NSString *usageStream;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long desiredOutcomeCount;

- (void).cxx_destruct;

@end
