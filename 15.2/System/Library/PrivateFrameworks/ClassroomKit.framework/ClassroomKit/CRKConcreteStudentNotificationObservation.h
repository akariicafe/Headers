@class NSString;

@interface CRKConcreteStudentNotificationObservation : NSObject <CRKObservation>

@property (readonly, copy, nonatomic) NSString *notificationName;
@property (copy, nonatomic) id /* block */ notificationHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithNotificationName:(id)a0 notificationHandler:(id /* block */)a1;
- (void)receiveNotificationWithName:(id)a0 userInfo:(id)a1;

@end
