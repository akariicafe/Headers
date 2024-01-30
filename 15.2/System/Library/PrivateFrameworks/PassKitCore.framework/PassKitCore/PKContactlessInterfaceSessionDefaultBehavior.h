@class NSString;

@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject <PKContactlessInterfaceSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachDefaultBehaviorToSession:(id)a0;

- (void)_processContext:(id)a0;
- (void)contactlessInterfaceSession:(id)a0 didEndPersistentCardEmulationWithContext:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didFinishTransactionWithContext:(id)a1;

@end
