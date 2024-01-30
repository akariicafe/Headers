@class NSString, NSDictionary, NSNumber;

@interface HKMCNotificationSentMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSNumber *areHealthNotificationsAuthorized;
@property (retain, nonatomic) NSNumber *numberOfDaysShiftedForFertileWindow;
@property (retain, nonatomic) NSNumber *numberOfDaysOffsetFromFertileWindowEnd;
@property (retain, nonatomic) NSNumber *numberOfDaysWithWristTemp45DaysBeforeOvulationConfirmedNotification;
@property (retain, nonatomic) NSNumber *internalLiveOnCycleFactorOverrideEnabled;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 areHealthNotificationsAuthorized:(id)a1;

@end
