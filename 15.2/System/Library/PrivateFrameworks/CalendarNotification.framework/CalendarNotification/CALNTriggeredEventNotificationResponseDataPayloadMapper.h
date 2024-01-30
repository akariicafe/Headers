@interface CALNTriggeredEventNotificationResponseDataPayloadMapper : NSObject

+ (void)_setHypothesisDataFromNotificationData:(id)a0 inPayload:(id)a1;
+ (void)_setLastFireTimeOfAlertOffsetFromTravelTimeFromNotificationData:(id)a0 inPayload:(id)a1;
+ (id)_hypothesisFromPayload:(id)a0;
+ (id)_lastFireTimeOfAlertOffsetFromTravelTimeFromPayload:(id)a0;
+ (id)_hypothesisDataForNotificationData:(id)a0;
+ (id)payloadForNotificationResponseData:(id)a0;
+ (id)notificationResponseDataForPayload:(id)a0;

@end
