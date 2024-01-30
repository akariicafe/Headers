@class NSString;

@interface WFCellularDataSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

@end
