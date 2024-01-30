@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperIdentityProviderFetchAllOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;

- (void)executionDidBegin;
- (void).cxx_destruct;

@end
