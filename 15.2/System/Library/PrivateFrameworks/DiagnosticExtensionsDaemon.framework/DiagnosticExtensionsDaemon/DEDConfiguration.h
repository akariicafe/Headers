@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)identifier;
- (id)classClusterAPIVersion;
- (id)sharedAnonymousListener;
- (id)machServiceName;
- (void)invalidateTestListeners;
- (id)errorDomain;
- (const char *)loggingSubsystem;
- (void).cxx_destruct;
- (unsigned long long)connectionType;
- (id)dedDirectory;

@end
