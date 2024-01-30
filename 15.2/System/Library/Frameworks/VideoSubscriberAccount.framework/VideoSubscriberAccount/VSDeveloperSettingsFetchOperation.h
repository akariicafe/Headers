@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;

- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;

@end
