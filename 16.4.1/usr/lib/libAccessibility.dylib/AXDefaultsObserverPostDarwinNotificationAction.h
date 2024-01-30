@class NSString;

@interface AXDefaultsObserverPostDarwinNotificationAction : NSObject <AXDefaultsObserverAction>

@property (copy, nonatomic) NSString *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDarwinNotification:(id)a0;
- (void).cxx_destruct;
- (void)performForChangedDefault:(id)a0;

@end
