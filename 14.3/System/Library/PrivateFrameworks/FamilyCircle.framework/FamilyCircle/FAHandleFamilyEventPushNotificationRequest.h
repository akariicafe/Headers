@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

@property (readonly) NSDictionary *payload;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;

@end
