@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

@property (readonly) NSDictionary *payload;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;

@end
