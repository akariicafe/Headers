@class NSString;

@interface DMCRFMBDeviceEnvironment : NSObject <DMCRFDeviceEnvironment>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)installedAppBundleIdentifiers;
- (BOOL)_shouldIncludeApp:(id)a0;

@end
