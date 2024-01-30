@class NSString;

@interface AXDefaultsObserverExecuteBlockNotificationAction : NSObject <AXDefaultsObserverAction>

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)performForChangedDefault:(id)a0;

@end
