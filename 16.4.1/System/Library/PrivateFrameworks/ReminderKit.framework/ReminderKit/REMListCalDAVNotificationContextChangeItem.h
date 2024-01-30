@class NSArray, REMListChangeItem;

@interface REMListCalDAVNotificationContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (readonly, nonatomic) NSArray *calDAVNotifications;

- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)a0;
- (void)_addCalDAVNotification:(id)a0;
- (id)addCalDAVNotificationWithUUIDString:(id)a0 hostURL:(id)a1 externalIdentifier:(id)a2 externalModificationTag:(id)a3;
- (void)clearCalDAVNotifications;
- (void)removeCalDAVNotication:(id)a0;
- (void)updateCalDAVNotification:(id)a0 withBlock:(id /* block */)a1;

@end
