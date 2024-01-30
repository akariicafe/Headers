@class NSArray, NSDictionary, NSString, NSDate, VMUProcessObjectGraph;

@interface MemoryResourceException : NSObject <NSCopying> {
    unsigned long long _ioAccelDirtySwappedSize;
}

@property (readonly) long long version;
@property (readonly) unsigned int task;
@property (readonly) unsigned int suspensionToken;
@property (readonly) NSDictionary *footprintOutput;
@property (readonly) NSArray *ioSurfaceInfo;
@property (readonly) NSArray *ioAccelMemoryInfo;
@property (readonly) NSArray *ioAccelMemoryInfoErrors;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) unsigned long long cid;
@property (readonly) NSDate *startTime;
@property (readonly) NSDate *currentTime;
@property (readonly) unsigned int dirtyFlags;
@property (readonly) unsigned int procFlags;
@property (readonly) long long exceptionCode0;
@property (readonly) unsigned long long crashedThreadId;
@property (readonly) unsigned long long ledgerPhysFootprint;
@property (readonly) unsigned long long ledgerPhysFootprintPeak;
@property (readonly) unsigned long long ledgerInternal;
@property (readonly) unsigned long long ledgerInternalCompressed;
@property (readonly) unsigned long long ledgerAlternateAccounting;
@property (readonly) unsigned long long ledgerAlternateAccountingCompressed;
@property (readonly) unsigned long long ledgerPurgeableNonvolatile;
@property (readonly) unsigned long long ledgerPurgeableNonvolatileCompressed;
@property (readonly) unsigned long long ledgerPageTable;
@property (readonly) unsigned long long ledgerIOKitMapped;
@property (readonly) unsigned long long ledgerWiredMem;
@property (readonly) unsigned long long ledgerNetworkNonvolatile;
@property (readonly) unsigned long long ledgerNetworkNonvolatileCompressed;
@property (readonly) NSArray *osLogs;
@property (readonly) NSDictionary *cachedMetaDataDict;
@property (retain) NSString *memgraphError;
@property (readonly) VMUProcessObjectGraph *memoryGraph;
@property (readonly) NSDictionary *executionStack;
@property (readonly) NSString *execName;
@property (readonly) NSString *execPath;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *coalitionBundleID;
@property (readonly) long long exceptionType;
@property (readonly) unsigned long long limitValue;
@property (readonly) long long upTime;
@property (readonly) BOOL is64Bit;
@property (readonly) NSString *hwModel;
@property (readonly) NSDictionary *osVersion;

+ (id)dictionaryForIOAccelMemoryInfo:(id)a0;
+ (id)dictionaryForIOSurfaceDescription:(id)a0;
+ (id)resourceExceptionFromTask:(unsigned int)a0 error:(id *)a1;
+ (id)resourceExceptionFromLogFileHandle:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isFirstParty;
- (id)processPidString;
- (void)extractCorpseInfoHandler:(struct kcdata_iter { struct kcdata_item *x0; void *x1; })a0;
- (id)_symbolOwners;
- (long long)_saveLogFileWithHandle:(id)a0 error:(id *)a1;
- (id)createMetaDataDict;
- (void)releaseAnalyzedTask;
- (id)initUsingHostInfoWithTask:(unsigned int)a0 andSuspensionToken:(unsigned int)a1;
- (BOOL)extractCorpseInfo;
- (BOOL)extractTaskInfo;
- (void)_populateVerboseDiagnosticsWithOptions:(unsigned long long)a0 timeoutSecs:(unsigned long long)a1;
- (void)generateFootprint:(BOOL)a0;
- (void)extractBacktraceInfo;
- (BOOL)generateMemoryGraph:(BOOL)a0;
- (id)initWithMetaDataDict:(id)a0 andMemoryGraph:(id)a1;
- (id)prettyPrintBacktrace:(BOOL)a0;
- (id)prettyPrintBinaryImages;
- (id)prettyPrintIOSurfaceInfo;
- (id)prettyPrintIOAccelMemoryInfo;
- (BOOL)saveLogFileWithHandle:(id)a0 error:(id *)a1;
- (void)extractSystemLogs:(id)a0 fromDate:(id)a1 toDate:(id)a2;
- (void)populateVerboseDiagnostics:(BOOL)a0;

@end
