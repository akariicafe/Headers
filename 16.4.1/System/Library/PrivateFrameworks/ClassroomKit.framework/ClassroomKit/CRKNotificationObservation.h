@class NSString, NSNotificationCenter, NSObject;

@interface CRKNotificationObservation : NSObject <CRKObservation>

@property (readonly, copy, nonatomic) NSString *notificationName;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSObject *object;
@property (copy, nonatomic) id /* block */ notificationHandler;

+ (id)observationWithNotificationCenter:(id)a0 notificationName:(id)a1 object:(id)a2 notificationHandler:(id /* block */)a3;

- (void)endObserving;
- (void)beginObserving;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0 notificationName:(id)a1 object:(id)a2 notificationHandler:(id /* block */)a3;
- (void)notificationDidFire:(id)a0;

@end
