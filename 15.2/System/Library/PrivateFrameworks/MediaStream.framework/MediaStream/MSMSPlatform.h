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

- (BOOL)shouldEnableNewFeatures;
- (id)contentURLForPersonID:(id)a0;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (void)logFile:(const char *)a0 func:(const char *)a1 line:(int)a2 facility:(int)a3 level:(int)a4 format:(id)a5 args:(char *)a6;
- (BOOL)_mayPerformFileTransfer;
- (id)socketOptions;
- (id)stringForSysctlKey:(id)a0;
- (id)hardwareString;
- (Class)deletePluginClass;
- (id)authTokenForPersonID:(id)a0;
- (BOOL)shouldLogAtLevel:(int)a0;
- (Class)pluginClass;
- (void)logFacility:(int)a0 level:(int)a1 format:(id)a2 args:(char *)a3;
- (void).cxx_destruct;
- (Class)subscriberPluginClass;
- (id)init;
- (id)theDaemon;
- (void)didDetectUnrecoverableCondition;
- (void)_rereadDefaults;
- (Class)publisherPluginClass;
- (BOOL)isPerformanceLoggingEnabled;
- (id)pathMediaStreamDir;
- (BOOL)policyMayUpload;
- (BOOL)policyMayDownload;
- (id)UDID;
- (struct __CFString { } *)_facilityStringForFacility:(int)a0;
- (id)OSVersion;
- (id)OSString;
- (id)_accountForPersonID:(id)a0;
- (id)fullNameFromFirstName:(id)a0 lastName:(id)a1;
- (id)appBundleInfoString;
- (id)baseURLForPersonID:(id)a0;

@end
