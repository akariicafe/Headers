@class NSMapTable;
@protocol HMFLocking;

@interface HMDRemoteMessageNotifications : HMFObject {
    id<HMFLocking> _lock;
}

@property (retain, nonatomic) NSMapTable *sessionNotificationPayloads;

+ (void)initialize;
+ (id)messagesWithNotificationResponses;
+ (BOOL)messageExpectsNotificationResponse:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)_notificationPayloadsForDevice:(id)a0;
- (void)addNotificationPayload:(id)a0 identifier:(id)a1 device:(id)a2;
- (void)removeNotificationPayloadWithIdentifier:(id)a0 device:(id)a1;
- (id)notificationPayloadWithIdentifier:(id)a0 device:(id)a1;
- (void)clearNotificationsForDevice:(id)a0;

@end
