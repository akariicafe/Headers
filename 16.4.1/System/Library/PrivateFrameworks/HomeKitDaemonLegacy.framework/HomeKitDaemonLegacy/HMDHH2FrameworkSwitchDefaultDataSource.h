@class NSString;

@interface HMDHH2FrameworkSwitchDefaultDataSource : NSObject <HMDHH2FrameworkSwitchDataSource>

@property (readonly) BOOL isHH2Enabled;
@property (readonly) unsigned long long setupMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controller:(id)a0 cloudDatabaseWithContainerID:(id)a1;

@end
