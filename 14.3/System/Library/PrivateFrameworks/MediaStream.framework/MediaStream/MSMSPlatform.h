@class NSData, ACAccountStore, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) BOOL isPerfLoggingEnabled;
@property (retain, nonatomic) NSData *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)thePlatform;

- (id)UDID;
- (BOOL)shouldLogAtLevel:(int)a0;
- (id)baseURLForPersonID:(id)a0;
- (id)init;
- (Class)publisherPluginClass;
- (void).cxx_destruct;
- (id)appBundleInfoString;
- (id)OSString;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (Class)pluginClass;
- (id)contentURLForPersonID:(id)a0;
- (id)_accountForPersonID:(id)a0;
- (Class)deletePluginClass;
- (id)stringForSysctlKey:(id)a0;
- (id)theDaemon;
- (void)didDetectUnrecoverableCondition;
- (BOOL)shouldEnableNewFeatures;
- (id)socketOptions;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (id)hardwareString;
- (Class)subscriberPluginClass;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (BOOL)_mayPerformFileTransfer;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (void)_rereadDefaults;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)pathMediaStreamDir;
- (BOOL)isPerformanceLoggingEnabled;
- (id)OSVersion;
- (id)authTokenForPersonID:(id)a0;

@end
