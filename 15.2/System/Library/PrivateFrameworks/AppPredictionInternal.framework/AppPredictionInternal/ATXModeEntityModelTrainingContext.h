@class NSMutableDictionary, NSMutableSet;

@interface ATXModeEntityModelTrainingContext : NSObject {
    NSMutableDictionary *_receiveEventsForNotificationIds;
    NSMutableSet *_notificationIdsWithUnknownReceiveEvents;
}

- (void).cxx_destruct;
- (id)init;
- (id)dkEventForNotificationReceiptWithNotificationId:(id)a0;
- (id)receiveEventForNotificationId:(id)a0;

@end
