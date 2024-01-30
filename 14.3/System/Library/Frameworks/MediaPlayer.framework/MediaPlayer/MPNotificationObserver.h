@class NSString;

@interface MPNotificationObserver : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id object;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)_handleNotification:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 object:(id)a1 handler:(id /* block */)a2;

@end
