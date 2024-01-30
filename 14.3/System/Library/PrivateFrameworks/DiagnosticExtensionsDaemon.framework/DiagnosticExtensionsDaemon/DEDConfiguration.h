@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (unsigned long long)connectionType;
- (const char *)loggingSubsystem;
- (void).cxx_destruct;
- (id)errorDomain;
- (id)machServiceName;
- (id)identifier;
- (id)dedDirectory;
- (id)classClusterAPIVersion;
- (id)sharedAnonymousListener;
- (void)invalidateTestListeners;

@end
