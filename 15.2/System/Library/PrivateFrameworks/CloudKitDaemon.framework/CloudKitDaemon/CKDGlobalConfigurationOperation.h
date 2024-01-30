@class CKDServerConfiguration, NSObject;
@protocol OS_dispatch_group;

@interface CKDGlobalConfigurationOperation : CKDOperation

@property (retain, nonatomic) CKDServerConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationFetchedGroup;

- (id)activityCreate;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (void).cxx_destruct;

@end
