@class REMList, NSArray;

@interface REMListCalDAVNotificationContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) NSArray *calDAVNotifications;

- (void).cxx_destruct;
- (id)initWithList:(id)a0;

@end
