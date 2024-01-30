@class NSString, CALNNotificationRecord, BSServiceConnectionEndpoint;

@interface CALNNotificationRecordResponse : NSObject

@property (readonly, nonatomic) CALNNotificationRecord *notificationRecord;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *originIdentifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotificationRecord:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNotificationRecord:(id)a0 actionIdentifier:(id)a1 originIdentifier:(id)a2 targetConnectionEndpoint:(id)a3;

@end
