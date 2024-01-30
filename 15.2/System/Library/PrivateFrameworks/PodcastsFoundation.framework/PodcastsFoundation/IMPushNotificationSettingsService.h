@interface IMPushNotificationSettingsService : IMBaseStoreService

- (id)urlRequest;
- (void)performDataRequestWithCompletion:(id /* block */)a0;
- (id)endpointURLForKey:(id)a0;

@end
