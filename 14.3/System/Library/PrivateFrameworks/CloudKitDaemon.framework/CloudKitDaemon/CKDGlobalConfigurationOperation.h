@class CKDServerConfiguration, NSObject;
@protocol OS_dispatch_group;

@interface CKDGlobalConfigurationOperation : CKDOperation

@property (retain, nonatomic) CKDServerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup;

- (id)activityCreate;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldCheckAppVersion;

@end
