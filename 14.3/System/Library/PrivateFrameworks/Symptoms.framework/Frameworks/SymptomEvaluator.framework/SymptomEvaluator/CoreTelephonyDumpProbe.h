@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_source, CoreTelephonyDumpProbeDelegate;

@interface CoreTelephonyDumpProbe : NetDiagnosticProbe <CoreTelephonyShimDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *beginTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *endTimeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *archiveTimeoutTimer;
@property (retain, nonatomic) NSMutableArray *archivePaths;
@property (nonatomic) BOOL observingCoreTelephonyDumpBegin;
@property (nonatomic) BOOL observingCoreTelephonyDumpEnd;
@property (nonatomic) BOOL coreDumpEnabled;
@property (nonatomic) BOOL basebandTraceEnabled;
@property (nonatomic) BOOL gotFilteredOut;
@property (nonatomic) struct __CTServerConnection { } *ctServerConnection;
@property (retain) id<CoreTelephonyDumpProbeDelegate> delegate;
@property (nonatomic) double previousDumpTimestamp;
@property (copy, nonatomic) NSString *previousDumpFolderPath;
@property (copy, nonatomic) NSString *previousDumpFolderPrefix;
@property (nonatomic) unsigned long long maximumFileSizeToArchive;
@property (nonatomic) BOOL archiveDumpUponEnd;
@property (nonatomic) BOOL deleteCTDumpFilesAfterArchive;
@property (nonatomic) BOOL deleteArchiveAfterComplete;
@property (nonatomic) BOOL archivingCTDump;
@property (nonatomic) double startDumpTimeout;
@property (nonatomic) double endDumpTimeout;
@property (copy, nonatomic) NSString *dumpReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dateTimeStringFromCTDumpFolderPrefix:(id)a0;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)enableCoreTelephonyLoggingForCustomerSeed:(BOOL)a0;
- (void)ctServerConnectionNotification:(struct __CFString { } *)a0 notificationInfo:(struct __CFDictionary { } *)a1;
- (id)probeOutputFilePaths;
- (void)netDiagnosticTaskStatusChangedFor:(id)a0 toStatus:(int)a1;
- (BOOL)getBasebandTraceEnabledState:(BOOL *)a0 coreDumpEnabled:(BOOL *)a1;
- (void)archiveDumpFolderWithDumpTimestamp:(double)a0 folderPath:(id)a1 folderPrefix:(id)a2;
- (BOOL)startCoreTelephonyDumpArchive:(id)a0;
- (void)stopCoreTelephonyDumpMonitoring;
- (void)startCoreTelephonyDump:(double)a0;
- (void)waitForCoreTelephonyDumpEnd:(double)a0;

@end
