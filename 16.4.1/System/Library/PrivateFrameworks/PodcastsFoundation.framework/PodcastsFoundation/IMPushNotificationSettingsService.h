@interface IMPushNotificationSettingsService : IMBaseStoreService

- (id)urlRequest;
- (id)endpointURLForKey:(id)a0;
- (void)performDataRequestWithCompletion:(id /* block */)a0;

@end
