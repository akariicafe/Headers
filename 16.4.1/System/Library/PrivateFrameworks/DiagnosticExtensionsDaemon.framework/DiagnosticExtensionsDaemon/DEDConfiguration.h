@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (id)errorDomain;
- (unsigned long long)connectionType;
- (id)sharedAnonymousListener;
- (id)identifier;
- (id)classClusterAPIVersion;
- (id)machServiceName;
- (const char *)loggingSubsystem;
- (id)dedDirectory;
- (void)invalidateTestListeners;
- (void).cxx_destruct;

@end
