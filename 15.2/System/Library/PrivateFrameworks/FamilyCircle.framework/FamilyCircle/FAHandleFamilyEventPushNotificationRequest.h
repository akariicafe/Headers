@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

@property (readonly) NSDictionary *payload;

- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;

@end
