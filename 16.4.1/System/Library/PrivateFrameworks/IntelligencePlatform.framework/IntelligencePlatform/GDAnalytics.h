@interface GDAnalytics : NSObject

+ (void)sendEventForProductionLazyWithEventName:(id)a0 eventPayloadBuilder:(id /* block */)a1;
+ (void)sendEventForProductionWithEventName:(id)a0 eventPayload:(id)a1;

- (id)init;

@end
