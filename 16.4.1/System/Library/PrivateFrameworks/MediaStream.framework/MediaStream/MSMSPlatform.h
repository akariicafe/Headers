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

- (BOOL)shouldLogAtLevel:(int)a0;
- (BOOL)policyMayDownload;
- (id)stringForSysctlKey:(id)a0;
- (BOOL)shouldEnableNewFeatures;
- (Class)subscriberPluginClass;
- (id)socketOptions;
- (Class)pluginClass;
- (id)_accountForPersonID:(id)a0;
- (void)didDetectUnrecoverableCondition;
- (BOOL)_mayPerformFileTransfer;
- (Class)deletePluginClass;
- (id)OSVersion;
- (id)theDaemon;
- (void)_rereadDefaults;
- (id)pathMediaStreamDir;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (id)appBundleInfoString;
- (id)baseURLForPersonID:(id)a0;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (id)pushTokenForPersonID:(id)a0;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (id)UDID;
- (id)contentURLForPersonID:(id)a0;
- (id)init;
- (BOOL)policyMayUpload;
- (id)OSString;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)authTokenForPersonID:(id)a0;
- (Class)publisherPluginClass;
- (void).cxx_destruct;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (BOOL)isPerformanceLoggingEnabled;
- (id)hardwareString;

@end
