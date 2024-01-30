@class VSDeveloperServiceConnection, VSOptional;

@interface VSDeveloperSettingsFetchOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) VSDeveloperServiceConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
