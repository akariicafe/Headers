@interface MPUNotificationObserver : NSObject

@property (retain, nonatomic) id notificationObservationToken;

+ (id)observerWithName:(id)a0 object:(id)a1 queue:(id)a2 observationHandler:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 object:(id)a1 queue:(id)a2 observationHandler:(id /* block */)a3;

@end
