@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject

@property (readonly, nonatomic) UNSNotificationRecord *notificationRecord;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_initWithNotificationRecord:(id)a0;

@end
