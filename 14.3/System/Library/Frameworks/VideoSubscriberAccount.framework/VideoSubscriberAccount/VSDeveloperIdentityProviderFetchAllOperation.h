@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;

- (void).cxx_destruct;
- (void)executionDidBegin;

@end
