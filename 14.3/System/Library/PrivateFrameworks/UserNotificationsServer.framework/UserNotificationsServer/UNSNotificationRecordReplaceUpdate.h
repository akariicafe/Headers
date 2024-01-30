@class UNSNotificationRecord;

@interface UNSNotificationRecordReplaceUpdate : UNSNotificationRecordUpdate

@property (readonly, nonatomic) UNSNotificationRecord *replacedNotificationRecord;
@property (readonly, nonatomic) BOOL shouldRepost;

+ (id)updateWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithNotificationRecord:(id)a0 replacedNotificationRecord:(id)a1 shouldRepost:(BOOL)a2;

@end
