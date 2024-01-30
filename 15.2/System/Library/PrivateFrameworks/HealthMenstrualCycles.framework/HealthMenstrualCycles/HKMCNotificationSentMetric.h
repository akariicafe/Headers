@class NSString, NSDictionary;

@interface HKMCNotificationSentMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) long long numberOfDaysShiftedForFertileWindow;
@property (nonatomic) long long numberOfDaysBeforePredictionEnd;

- (id)initWithCategory:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 numberOfDaysShiftedForFertileWindow:(long long)a1 numberOfDaysBeforePredictionEnd:(long long)a2;

@end
