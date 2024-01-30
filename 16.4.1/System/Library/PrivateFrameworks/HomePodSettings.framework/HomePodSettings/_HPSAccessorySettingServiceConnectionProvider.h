@class NSString, NSXPCConnection;

@interface _HPSAccessorySettingServiceConnectionProvider : NSObject <HPSAccessorySettingServiceConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *accessorySettingServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
