@class NSString, NSMutableDictionary, DTDSCSymbolicatorCache, NSObject;
@protocol OS_dispatch_queue;

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI> {
    NSMutableDictionary *_peerTrackingSelectorsByPid;
    NSObject<OS_dispatch_queue> *_trackingSymbolicatorQueue;
    struct TFPPidWatcher { unsigned int clientPort; } _dtsecurityPidWatcher;
    BOOL _expiredPidTrackingEnabled;
    DTDSCSymbolicatorCache *_sharedCacheSymbolicators;
    struct kpep_db { } *_kpepDB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;
+ (BOOL)isApplication:(id)a0;

- (id)uniqueID;
- (id)productVersion;
- (id)nameForUID:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)networkInformation;
- (id)initWithChannel:(id)a0;
- (id)execnameForPid:(id)a0;
- (id)_configurationProperties;
- (id)_getIOMFBProperties;
- (id)_lookupInt32Sysctl:(const char *)a0;
- (id)_lookupInt64Sysctl:(const char *)a0;
- (id)createSignatureFromLibraryUUID:(id)a0 sharedCacheUUID:(id)a1 andPath:(id)a2;
- (id)deepSymbolOwnerSignatureForPid:(id)a0 uuid:(id)a1;
- (id)directoryListingForPath:(id)a0;
- (void)enableExpiredPidTracking:(id)a0;
- (id)hardwareInformation;
- (int)hwCPU64BitCapable;
- (int)hwCPUsubtype;
- (int)hwCPUtype;
- (id)iconDescriptionFileForAppPath:(id)a0;
- (id)iconDescriptionForIconPath:(id)a0;
- (id)isRunningPid:(id)a0;
- (id)kpepDatabase;
- (id)lookupSysctl:(const char *)a0;
- (id)machKernelName;
- (id)machTimeInfo;
- (id)nameForGID:(id)a0;
- (int)numberOfCpus;
- (int)numberOfPhysicalCpus;
- (id)runningProcesses;
- (id)symbolicatorSignatureForPid:(id)a0 trackingSelector:(id)a1;
- (id)symbolicatorSignaturesForExpiredPids;
- (id)sysmonCoalitionAttributes;
- (id)sysmonProcessAttributes;
- (id)sysmonSystemAttributes;
- (id)traceCodesFile;
- (void)unregisterSignatureTrackingForPid:(id)a0;

@end
