@class NSString, NSDictionary, NSNumber, HKMedicationAnalyticsGenericFieldsProvider;

@interface HKMedicationNotificationMetric : NSObject {
    HKMedicationAnalyticsGenericFieldsProvider *_genericDataProvider;
}

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSNumber *areHealthNotificationsAuthorized;
@property (nonatomic) long long interactionType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 areHealthNotificationsAuthorized:(id)a1 dataSource:(id)a2;
- (id)interactionTypeValue;
- (id)typeValue;

@end
