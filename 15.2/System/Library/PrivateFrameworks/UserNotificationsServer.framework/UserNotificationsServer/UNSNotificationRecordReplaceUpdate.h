@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord;
@property (readonly, nonatomic) BOOL shouldRepost;

+ (id)updateWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_initWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

@end
