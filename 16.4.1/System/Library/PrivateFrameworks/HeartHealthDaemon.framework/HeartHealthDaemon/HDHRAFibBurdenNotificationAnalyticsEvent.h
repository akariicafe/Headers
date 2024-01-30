@class NSString, HDHRAFibBurdenNotificationMode, HKFeatureStatus;
@protocol HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider, HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer;

@interface HDHRAFibBurdenNotificationAnalyticsEvent : NSObject <HKAnalyticsEvent> {
    HDHRAFibBurdenNotificationMode *_notificationMode;
    HKFeatureStatus *_featureStatus;
    id<HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer> _focusModeDeterminer;
    id<HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> _notificationsAuthorizedProvider;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)a0 error:(id *)a1;
- (id)_notificationTypeStringForType:(long long)a0;
- (id)initWithNotificationMode:(id)a0 featureStatus:(id)a1 focusModeDeterminer:(id)a2 notificationsAuthorizedProvider:(id)a3;
- (id)initWithNotificationMode:(id)a0 featureStatus:(id)a1 profile:(id)a2;

@end
